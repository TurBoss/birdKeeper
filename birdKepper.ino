#include <TimeLib.h>
#include <EEPROM.h>
#include <Bounce2.h>
#include <MenuSystem.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

// Inputs

#define BUTTON_UP 4
#define BUTTON_DOWN 5
#define BUTTON_LEFT 6
#define BUTTON_RIGHT 7

// outputs

#define LEDS 20
#define TEST_LED0 11
#define TEST_LED1 12
#define TEST_LED2 13

// Variables

bool debug = true;
bool backlightOn = true;
int backlightCounter = 30;

bool drawSetup = false;
int editMenu = 0;

int configAddr = 0; // Stores if the device is configured
int dataAddr = 10; // Stores the main data in a Settings Struct

bool configured = false;
int processRuning = 0;
int startFadingIn = 0;
int startFadingOut = 0;

unsigned long previousMillis = 0;
unsigned long interval = 1000;

unsigned long backlightPreviousMillis = 0;
unsigned long backlightInterval = 1000;

int minsDay = 3; // Mins to Decrease start time

bool edit_mm1_m1_HH = false;
bool edit_mm1_m1_MM = false;
bool edit_mm1_m1_SS = false;

bool edit_mm1_m2_HH = false;
bool edit_mm1_m2_MM = false;
bool edit_mm1_m2_SS = false;

bool edit_mm1_m3_HH = false;
bool edit_mm1_m3_MM = false;
bool edit_mm1_m3_SS = false;

bool edit_mm1_m4_HH = false;
bool edit_mm1_m4_MM = false;
bool edit_mm1_m4_SS = false;

bool edit_mm1_m5_HH = false;
bool edit_mm1_m5_MM = false;
bool edit_mm1_m5_SS = false;

bool edit_mm1_m6_DD = false;

bool edit_mm2_m1_DD = false;
bool edit_mm2_m1_MM = false;
bool edit_mm2_m1_YY = false;

bool edit_mm2_m2_HH = false;
bool edit_mm2_m2_MM = false;
bool edit_mm2_m2_SS = false;


int hoursInSecs = 0;
int minutesInSecs = 0;
int secs = 0;
int maxSecs = 0;
int lastSecs = 0;

int pwmResolution = 4095;

float fade = 0.0;
float fadeInc = 0.0;
float fadeDec = 0.0;

// Instantiate the bouncers

Bounce up = Bounce();
Bounce down = Bounce();
Bounce left = Bounce();
Bounce right = Bounce();

// Menu variables

MenuSystem ms;

Menu rm("Jauria Studios INC");


Menu mm1("Ajuste hora");


Menu mm1_m1("Amanecer");

MenuItem mm1_m1_HH("HH");
MenuItem mm1_m1_MM("MM");
MenuItem mm1_m1_SS("SS");

Menu mm1_m2("Anochecer");

MenuItem mm1_m2_HH("HH");
MenuItem mm1_m2_MM("MM");
MenuItem mm1_m2_SS("SS");

Menu mm1_m3("Duracion");

MenuItem mm1_m3_HH("HH");
MenuItem mm1_m3_MM("MM");
MenuItem mm1_m3_SS("SS");

Menu mm1_m4("Intervalo Inicio");

MenuItem mm1_m4_HH("HH");
MenuItem mm1_m4_MM("MM");
MenuItem mm1_m4_SS("SS");

Menu mm1_m5("Intervalo Fin");

MenuItem mm1_m5_HH("HH");
MenuItem mm1_m5_MM("MM");
MenuItem mm1_m5_SS("SS");


Menu mm1_m6("Duracion dias");

MenuItem mm1_m6_DD("DD");


Menu mm2("Ajuste fecha/hora");


Menu mm2_m1("Fecha");

MenuItem mm2_m1_DD("DD");
MenuItem mm2_m1_MM("MM");
MenuItem mm2_m1_YY("YY");

Menu mm2_m2("Hora");

MenuItem mm2_m2_HH("HH");
MenuItem mm2_m2_MM("MM");
MenuItem mm2_m2_SS("SS");

MenuItem m_BACK("Volver");
MenuItem m_SAVE("Guardar");
MenuItem m_RUN("Ejecutar");

LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7);
LCD *screen = &lcd;

struct Settings {

  int daysMax; // Max days to run
  unsigned long daysRun; // Day count

  int startHour; // Start fading on
  int startMin;
  int startSec;

  int stopHour; // Start fading off
  int stopMin;
  int stopSec;

  int fadeHour; // Time to fade the leds on and off
  int fadeMin;
  int fadeSec;

  int intervalStartHour; // Lights interval
  int intervalStartMin;
  int intervalStartSec;

  int intervalStopHour; // Lights interval
  int intervalStopMin;
  int intervalStopSec;

  bool processRunning; // Stores if the process is running

};

Settings data;

time_t getTeensy3Time()
{
  return Teensy3Clock.get();
}

// Standard arduino functions

void setup() {


  Serial.begin(115200);

  Serial.println("inicializacion");

  setSyncProvider(getTeensy3Time);

  delay(100);

  if (timeStatus() != timeSet) {
    Serial.println("Unable to sync with the RTC");
  } else {
    Serial.println("RTC has set the system time");
  }

  pinMode(BUTTON_UP, INPUT_PULLUP);
  pinMode(BUTTON_DOWN, INPUT_PULLUP);
  pinMode(BUTTON_LEFT, INPUT_PULLUP);
  pinMode(BUTTON_RIGHT, INPUT_PULLUP);

  pinMode(LEDS, OUTPUT);
  pinMode(TEST_LED0, OUTPUT);
  pinMode(TEST_LED1, OUTPUT);
  pinMode(TEST_LED2, OUTPUT);

  digitalWrite(TEST_LED0, LOW);
  digitalWrite(TEST_LED1, LOW);
  digitalWrite(TEST_LED2, LOW);

  analogWriteResolution(12);  // analogWrite value 0 to 4095

  // Setup the Bouncers instances :

  up.attach(BUTTON_UP);
  down.attach(BUTTON_DOWN);
  left.attach(BUTTON_LEFT);
  right.attach(BUTTON_RIGHT);

  up.interval(5);
  down.interval(5);
  left.interval(5);
  right.interval(5);

  // Menu setup
  /*
    Menu Structure:

    - Ajuste horario
    -- Hora amanecer
    --- HH
    --- MM
    --- SS
    --- Guardar
    --- Volver
    -- Hora anochecer
    --- HH
    --- MM
    --- SS
    --- Guardar
    --- Volver
    -- Intervalo Inicio horas
    --- HH
    --- MM
    --- SS
    --- Guardar
    --- Volver
    -- Intervalo Fin horas
    --- HH
    --- MM
    --- SS
    --- Guardar
    --- Volver
    -- Duracion amanecer/anochecer
    --- HH
    --- MM
    --- SS
    --- Guardar
    --- Volver
    -- Duracion dias
    --- DD
    --- Guardar
    --- Volver
    -- Volver
    - Fecha y hora
    -- Fecha
    --- DD
    --- MM
    --- YY
    --- Guardar
    --- Volver
    -- Hora
    --- HH
    --- MM
    --- SS
    --- Guardar
    --- Volver
    -- Volver
    - Ejecutar
  */


  mm1_m1.add_item(&mm1_m1_HH, &on_mm1_m1_HH);
  mm1_m1.add_item(&mm1_m1_MM, &on_mm1_m1_MM);
  mm1_m1.add_item(&mm1_m1_SS, &on_mm1_m1_SS);
  mm1_m1.add_item(&m_SAVE, &on_m_SAVE);
  mm1_m1.add_item(&m_BACK, &on_m_BACK);

  mm1.add_menu(&mm1_m1);

  mm1_m2.add_item(&mm1_m2_HH, &on_mm1_m2_HH);
  mm1_m2.add_item(&mm1_m2_MM, &on_mm1_m2_MM);
  mm1_m2.add_item(&mm1_m2_SS, &on_mm1_m2_SS);
  mm1_m2.add_item(&m_SAVE, &on_m_SAVE);
  mm1_m2.add_item(&m_BACK, &on_m_BACK);

  mm1.add_menu(&mm1_m2);

  mm1_m3.add_item(&mm1_m3_HH, &on_mm1_m3_HH);
  mm1_m3.add_item(&mm1_m3_MM, &on_mm1_m3_MM);
  mm1_m3.add_item(&mm1_m3_SS, &on_mm1_m3_SS);
  mm1_m3.add_item(&m_SAVE, &on_m_SAVE);
  mm1_m3.add_item(&m_BACK, &on_m_BACK);

  mm1.add_menu(&mm1_m3);

  mm1_m4.add_item(&mm1_m4_HH, &on_mm1_m4_HH);
  mm1_m4.add_item(&mm1_m4_MM, &on_mm1_m4_MM);
  mm1_m4.add_item(&mm1_m4_SS, &on_mm1_m4_SS);
  mm1_m4.add_item(&m_SAVE, &on_m_SAVE);
  mm1_m4.add_item(&m_BACK, &on_m_BACK);

  mm1.add_menu(&mm1_m4);

  mm1_m5.add_item(&mm1_m5_HH, &on_mm1_m5_HH);
  mm1_m5.add_item(&mm1_m5_MM, &on_mm1_m5_MM);
  mm1_m5.add_item(&mm1_m5_SS, &on_mm1_m5_SS);
  mm1_m5.add_item(&m_SAVE, &on_m_SAVE);
  mm1_m5.add_item(&m_BACK, &on_m_BACK);

  mm1.add_menu(&mm1_m5);

  mm1_m6.add_item(&mm1_m6_DD, &on_mm1_m6_DD);
  mm1_m6.add_item(&m_SAVE, &on_m_SAVE);
  mm1_m6.add_item(&m_BACK, &on_m_BACK);

  mm1.add_menu(&mm1_m6);

  mm1.add_item(&m_BACK, &on_m_BACK);

  rm.add_menu(&mm1);

  mm2_m1.add_item(&mm2_m1_DD, &on_mm2_m1_DD);
  mm2_m1.add_item(&mm2_m1_MM, &on_mm2_m1_MM);
  mm2_m1.add_item(&mm2_m1_YY, &on_mm2_m1_YY);
  mm2_m1.add_item(&m_SAVE, &on_m_SAVE);
  mm2_m1.add_item(&m_BACK, &on_m_BACK);

  mm2.add_menu(&mm2_m1);

  mm2_m2.add_item(&mm2_m2_HH, &on_mm2_m2_HH);
  mm2_m2.add_item(&mm2_m2_MM, &on_mm2_m2_MM);
  mm2_m2.add_item(&mm2_m2_SS, &on_mm2_m2_SS);
  mm2_m2.add_item(&m_SAVE, &on_m_SAVE);
  mm2_m2.add_item(&m_BACK, &on_m_BACK);

  mm2.add_menu(&mm2_m2);

  mm2.add_item(&m_BACK, &on_m_BACK);

  rm.add_menu(&mm2);

  rm.add_item(&m_RUN, &on_m_RUN);

  ms.set_root_menu(&rm);

  screen->begin( 20, 4 );
  screen->setBacklightPin(3, POSITIVE);
  screen->setBacklight(HIGH);
  screen->clear();
  screen->home();


  EEPROM.get(configAddr, configured);

  if ( configured != 255) {
    screen->setCursor(1, 0);
    screen->print("Device configured");

    digitalWrite(TEST_LED1, HIGH );
    delay(100);
    digitalWrite(TEST_LED1, LOW );
    delay(100);
    digitalWrite(TEST_LED1, HIGH );
    delay(100);
    digitalWrite(TEST_LED1, LOW );

    EEPROM.get(dataAddr, data);

    if ( data.processRunning == true ) {
      digitalWrite(TEST_LED1, HIGH );
    }

  }
  else {
    screen->home();
    screen->print("Device not configured");

    digitalWrite(TEST_LED0, HIGH );
    delay(100);
    digitalWrite(TEST_LED0, LOW );
    delay(100);
    digitalWrite(TEST_LED0, HIGH );
    delay(100);
    digitalWrite(TEST_LED0, LOW );

  }

  delay(1000);

  displayMenu();

}

void loop() {

  handleKeys();

  unsigned long currentMillis = millis();

  if ((backlightCounter != 0) && (backlightOn == true)) {

    if (currentMillis - backlightPreviousMillis > backlightInterval) {
      backlightPreviousMillis = currentMillis;
      backlightCounter--;

      if (backlightCounter == 0) {
        backlightOn = false;
        screen->off();
      }
    }
  }

  if ( data.processRunning ) {
    if (currentMillis - previousMillis > interval) {
      previousMillis = currentMillis;

      Serial.print("Hour: ");
      Serial.print(hour());
      Serial.print(":");
      Serial.print(minute());
      Serial.print(":");
      Serial.print(second());
      Serial.print(" ");
      Serial.print(day());
      Serial.print("/");
      Serial.print(month());
      Serial.print("/");
      Serial.println(year());

      int startMins = data.startMin + (data.daysRun * minsDay);
      int startHours = data.startHour;
      int startSecs = data.startSec;

      if (startMins > 59) {
        startHours++;
      }
      if (startHours > 23) {
        startHours = 0;
      }

      if ((hour() == startHours) and (minute() == startMins) and (second() == startSecs) and (startFadingIn == 0)) {
        Serial.println("Start Fading");

        hoursInSecs = data.fadeHour * 3600;
        minutesInSecs = data.fadeMin * 60;
        maxSecs = hoursInSecs + minutesInSecs;

        fade = 0;
        fadeInc = (float)pwmResolution / (float)maxSecs;
        startFadingIn = 1;

        Serial.print("FADE IN TIME :");
        Serial.print(maxSecs);
        Serial.print(" steps of ");
        Serial.println(fadeInc);
      }

      if (startFadingIn) {
        if (secs < maxSecs) {
          Serial.print("Fading in: ");
          Serial.println(fade);
          analogWrite(LEDS, fade);
          fade += fadeInc;
          secs++;
        }
        else {
          startFadingOut = 0;
          analogWrite(LEDS, 4095);
        }
      }

      int stopMins = data.stopMin + (data.daysRun * minsDay);
      int stopHours = data.stopHour;
      int stopSecs = data.stopSec;

      if (stopMins > 59) {
        stopHours++;
      }
      if (stopHours > 23) {
        stopHours = 0;
      }

      if ((hour() == stopHours) and (minute() == stopMins) and (second() == stopSecs) and (startFadingOut == 0)) {
        Serial.println("Stop Fading");

        hoursInSecs = data.fadeHour * 3600;
        minutesInSecs = data.fadeMin * 60;
        maxSecs = hoursInSecs + minutesInSecs;

        fade = pwmResolution;
        fadeDec = (float)pwmResolution / (float)maxSecs;
        startFadingOut = 1;

        Serial.print("FADE OUT TIME :");
        Serial.print(maxSecs);
        Serial.print(" steps of ");
        Serial.println(fadeInc);
      }

      if (startFadingOut) {
        if (secs < maxSecs) {
          Serial.print("Fading out: ");
          Serial.println(fade);
          analogWrite(LEDS, fade);
          fade -= fadeDec;
          secs++;
        }
        else {
          startFadingIn = 0;
          analogWrite(LEDS, 0);
        }
      }
    }
  }

  if (drawSetup) {
    drawConfig();
  }
}

void serialEvent() {
  char keyPressed;
  if ((keyPressed = Serial.read()) > 0) {
    handleMenu(keyPressed);
  }
}
