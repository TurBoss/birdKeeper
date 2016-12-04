/*-------------------------------------------------------------------------
  Teensy 3.2 program to extend the day light duration for birds.

  Written by TurBoss for JauriaStudios INC,

  -------------------------------------------------------------------------
  This file is part of the BirdKeeper.

  BirdKeeper is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation, either version 3 of
  the License, or (at your option) any later version.

  BirdKeeper is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with BirdKepper.  If not, see
  <http://www.gnu.org/licenses/>.
  -------------------------------------------------------------------------*/

// Menu callback functions

// Main menu 1 Menu 1
void on_mm1_m1_HH(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 1;

  edit_mm1_m1_HH = true;
  edit_mm1_m1_MM = false;
  edit_mm1_m1_SS = false;
}
void on_mm1_m1_MM(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 1;

  edit_mm1_m1_HH = false;
  edit_mm1_m1_MM = true;
  edit_mm1_m1_SS = false;
}
void on_mm1_m1_SS(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 1;

  edit_mm1_m1_HH = false;
  edit_mm1_m1_MM = false;
  edit_mm1_m1_SS = true;

}

// Main menu 1 Menu 2
void on_mm1_m2_HH(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 2;

  edit_mm1_m2_HH = true;
  edit_mm1_m2_MM = false;
  edit_mm1_m2_SS = false;

}
void on_mm1_m2_MM(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 2;

  edit_mm1_m2_HH = false;
  edit_mm1_m2_MM = true;
  edit_mm1_m2_SS = false;

}
void on_mm1_m2_SS(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 2;

  edit_mm1_m2_HH = false;
  edit_mm1_m2_MM = false;
  edit_mm1_m2_SS = true;

}

// Main menu 1 Menu 3
void on_mm1_m3_HH(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 3;

  edit_mm1_m3_HH = true;
  edit_mm1_m3_MM = false;
  edit_mm1_m3_SS = false;

}
void on_mm1_m3_MM(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 3;

  edit_mm1_m3_HH = false;
  edit_mm1_m3_MM = true;
  edit_mm1_m3_SS = false;

}
void on_mm1_m3_SS(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 3;

  edit_mm1_m3_HH = false;
  edit_mm1_m3_MM = false;
  edit_mm1_m3_SS = true;

}

// Main menu 1 Menu 4
void on_mm1_m4_HH(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 4;

  edit_mm1_m4_HH = true;
  edit_mm1_m4_MM = false;
  edit_mm1_m4_SS = false;

}
void on_mm1_m4_MM(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 4;

  edit_mm1_m4_HH = false;
  edit_mm1_m4_MM = true;
  edit_mm1_m4_SS = false;

}
void on_mm1_m4_SS(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 4;

  edit_mm1_m4_HH = false;
  edit_mm1_m4_MM = false;
  edit_mm1_m4_SS = true;

}

// Main menu 1 Menu 5
void on_mm1_m5_HH(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 5;

  edit_mm1_m5_HH = true;
  edit_mm1_m5_MM = false;
  edit_mm1_m5_SS = false;

}
void on_mm1_m5_MM(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 5;

  edit_mm1_m5_HH = false;
  edit_mm1_m5_MM = true;
  edit_mm1_m5_SS = false;

}
void on_mm1_m5_SS(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 5;

  edit_mm1_m5_HH = false;
  edit_mm1_m5_MM = false;
  edit_mm1_m5_SS = true;

}

// Main menu 1 Menu 6
void on_mm1_m6_DD(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 6;

  edit_mm1_m6_DD = true;

}

// Main menu 2 Menu 1
void on_mm2_m1_DD(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 7;

  edit_mm2_m1_DD = true;
  edit_mm2_m1_MM = false;
  edit_mm2_m1_YY = false;
}
void on_mm2_m1_MM(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 7;

  edit_mm2_m1_DD = false;
  edit_mm2_m1_MM = true;
  edit_mm2_m1_YY = false;
}
void on_mm2_m1_YY(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 7;

  edit_mm2_m1_DD = false;
  edit_mm2_m1_MM = false;
  edit_mm2_m1_YY = true;
}

// Main menu 2 Menu 2
void on_mm2_m2_HH(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 8;

  edit_mm2_m2_HH = true;
  edit_mm2_m2_MM = false;
  edit_mm2_m2_SS = false;
}
void on_mm2_m2_MM(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 8;

  edit_mm2_m2_HH = false;
  edit_mm2_m2_MM = true;
  edit_mm2_m2_SS = false;
}
void on_mm2_m2_SS(MenuItem* p_menu_item) {

  drawSetup = true;
  editMenu = 8;

  edit_mm2_m2_HH = false;
  edit_mm2_m2_MM = false;
  edit_mm2_m2_SS = true;
}

// Save menu
void on_m_SAVE(MenuItem* p_menu_item) {

  if (saveTime) {
    setTime(setHour, setMin, setSec, setDay, setMonth, setYear);
    Teensy3Clock.set(now());
    saveTime = false;
  }

  configured = true;

  EEPROM.put(configAddr, configured);
  EEPROM.put(dataAddr, data);
}

// Back menu
void on_m_BACK(MenuItem* p_menu_item) {
  ms.back();
  displayMenu();
}

// Run menu
void on_m_RUN(MenuItem* p_menu_item) {
  if ( configured ) {
    if ( data.processRunning == true ) {
      data.processRunning = false;
      digitalWrite(TEST_LED1, LOW);
    }
    else {
      data.processRunning = true;
      digitalWrite(TEST_LED1, HIGH);
    }
    EEPROM.put(dataAddr, data);
  }
  else {
    digitalWrite(TEST_LED0, LOW);
    delay(100);
    digitalWrite(TEST_LED1, HIGH);
  }
}
