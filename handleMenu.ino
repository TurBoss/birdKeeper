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

void handleMenu(char keyPressed) {
  //Menu const* cp_menu = ms.get_current_menu();

  switch (keyPressed) {
    case 'w': // Previus item

      // Start fade in

      if ( edit_mm1_m1_start_HH ) {
        if ( data.morningStartHour < 24 ) {
          data.morningStartHour += 1;
          if ( data.morningStartHour == 24 ) {
            data.morningStartHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStartHour);
        }
      }
      else if ( edit_mm1_m1_start_MM ) {
        if ( data.morningStartMin < 60 ) {
          data.morningStartMin += 1;
          if ( data.morningStartMin == 60 ) {
            data.morningStartMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStartMin);
        }
      }
      else if ( edit_mm1_m1_start_SS ) {
        if ( data.morningStartSec < 60 ) {
          data.morningStartSec += 1;
          if ( data.morningStartSec == 60 ) {
            data.morningStartSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStartSec);
        }
      }

      // Stop fade in

      else if ( edit_mm1_m1_stop_HH ) {
        if ( data.morningStopHour < 24 ) {
          data.morningStopHour += 1;
          if ( data.morningStopHour == 24 ) {
            data.morningStopHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStopHour);
        }
      }
      else if ( edit_mm1_m1_stop_MM ) {
        if ( data.morningStopMin < 60 ) {
          data.morningStopMin += 1;
          if ( data.morningStopMin == 60 ) {
            data.morningStopMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStopMin);
        }
      }
      else if ( edit_mm1_m1_stop_SS ) {
        if ( data.morningStopSec < 60 ) {
          data.morningStopSec += 1;
          if ( data.morningStopSec == 60 ) {
            data.morningStopSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStopSec);
        }
      }

      else if ( edit_mm1_m2_start_HH ) {
        if ( data.nightStartHour < 24 ) {
          data.nightStartHour += 1;
          if ( data.nightStartHour == 24 ) {
            data.nightStartHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStartHour);
        }
      }
      else if ( edit_mm1_m2_start_MM ) {
        if ( data.nightStartMin < 60 ) {
          data.nightStartMin += 1;
          if ( data.nightStartMin == 60 ) {
            data.nightStartMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStartMin);
        }
      }
      else if ( edit_mm1_m2_start_SS ) {
        if ( data.nightStartSec < 60 ) {
          data.nightStartSec += 1;
          if ( data.nightStartSec == 60 ) {
            data.nightStartSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStartSec);
        }
      }

      // Stop fade in

      else if ( edit_mm1_m2_stop_HH ) {
        if ( data.nightStopHour < 24 ) {
          data.nightStopHour += 1;
          if ( data.nightStopHour == 24 ) {
            data.nightStopHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStopHour);
        }
      }
      else if ( edit_mm1_m2_stop_MM ) {
        if ( data.nightStopMin < 60 ) {
          data.nightStopMin += 1;
          if ( data.nightStopMin == 60 ) {
            data.nightStopMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStopMin);
        }
      }
      else if ( edit_mm1_m2_stop_SS ) {
        if ( data.nightStopSec < 60 ) {
          data.nightStopSec += 1;
          if ( data.nightStopSec == 60 ) {
            data.nightStopSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStopSec);
        }
      }
      
      // Fade duration setup

      else if ( edit_mm1_m3_HH ) {
        if ( data.fadeHour < 24 ) {
          data.fadeHour += 1;
          if ( data.fadeHour == 24 ) {
            data.fadeHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.fadeHour);
        }
      }
      else if ( edit_mm1_m3_MM ) {
        if ( data.fadeMin < 60 ) {
          data.fadeMin += 1;
          if ( data.fadeMin == 60 ) {
            data.fadeMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.fadeMin);
        }
      }
      else if ( edit_mm1_m3_SS ) {
        if ( data.fadeSec < 60 ) {
          data.fadeSec += 1;
          if ( data.fadeSec == 60 ) {
            data.fadeSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.fadeSec);
        }
      }

      // Set Date

      else if ( edit_mm2_m1_DD ) {

        if ( setDay < 32 ) {
          setDay += 1;
          if ( setDay == 32 ) {
            setDay = 0;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setDay);
        }
      }
      else if ( edit_mm2_m1_MM ) {
        if ( setMonth < 13 ) {
          setMonth += 1;
          if ( setMonth == 13 ) {
            setMonth = 0;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setMonth);
        }
      }
      else if ( edit_mm2_m1_YY ) {
        if ( setYear < 3000 ) {
          setYear += 1;
          if ( setYear == 3000 ) {
            setYear = 2000;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setYear);
        }
      }

      // Set Hour

      else if ( edit_mm2_m2_HH ) {

        if ( setHour < 24 ) {
          setHour += 1;
          if ( setHour == 24 ) {
            setHour = 0;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setHour);
        }
      }
      else if ( edit_mm2_m2_MM ) {
        if ( setMin < 60 ) {
          setMin += 1;
          if ( setMin == 60 ) {
            setMin = 0;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setMin);
        }
      }
      else if ( edit_mm2_m2_SS ) {
        if ( setSec < 60 ) {
          setSec += 1;
          if ( setSec == 60 ) {
            setSec = 0;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setSec);
        }
      }

      else {
        ms.next(true);
        displayMenu();
      }

      break;

    case 's': // Next item

      // Start setup

      if ( edit_mm1_m1_start_HH ) {
        if ( data.morningStartHour > -1 ) {
          data.morningStartHour -= 1;
          if ( data.morningStartHour == -1 ) {
            data.morningStartHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStartHour);
        }
      }
      else if ( edit_mm1_m1_start_MM ) {
        if ( data.morningStartMin > -1 ) {
          data.morningStartMin -= 1;
          if ( data.morningStartMin == -1 ) {
            data.morningStartMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStartMin);
        }
      }
      else if ( edit_mm1_m1_start_SS ) {
        if ( data.morningStartSec > -1 ) {
          data.morningStartSec -= 1;
          if ( data.morningStartSec == -1 ) {
            data.morningStartSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStartSec);
        }
      }

      // Stop setup

      else if ( edit_mm1_m1_stop_HH ) {
        if ( data.morningStopHour > -1 ) {
          data.morningStopHour -= 1;
          if ( data.morningStopHour == -1 ) {
            data.morningStopHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStopHour);
        }
      }
      else if ( edit_mm1_m1_stop_MM ) {
        if ( data.morningStopMin > -1 ) {
          data.morningStopMin -= 1;
          if ( data.morningStopMin == -1 ) {
            data.morningStopMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStopMin);
        }
      }
      else if ( edit_mm1_m1_stop_SS ) {
        if ( data.morningStopSec > -1 ) {
          data.morningStopSec -= 1;
          if ( data.morningStopSec == -1 ) {
            data.morningStopSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.morningStopSec);
        }
      }

      else if ( edit_mm1_m2_start_HH ) {
        if ( data.nightStartHour > -1 ) {
          data.nightStartHour -= 1;
          if ( data.nightStartHour == -1 ) {
            data.nightStartHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStartHour);
        }
      }
      else if ( edit_mm1_m2_start_MM ) {
        if ( data.nightStartMin > -1 ) {
          data.nightStartMin -= 1;
          if ( data.nightStartMin == -1 ) {
            data.nightStartMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStartMin);
        }
      }
      else if ( edit_mm1_m2_start_SS ) {
        if ( data.nightStartSec > -1 ) {
          data.nightStartSec -= 1;
          if ( data.nightStartSec == -1 ) {
            data.nightStartSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStartSec);
        }
      }

      // Stop setup

      else if ( edit_mm1_m2_stop_HH ) {
        if ( data.nightStopHour > -1 ) {
          data.nightStopHour -= 1;
          if ( data.nightStopHour == -1 ) {
            data.nightStopHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStopHour);
        }
      }
      else if ( edit_mm1_m2_stop_MM ) {
        if ( data.nightStopMin > -1 ) {
          data.nightStopMin -= 1;
          if ( data.nightStopMin == -1 ) {
            data.nightStopMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStopMin);
        }
      }
      else if ( edit_mm1_m2_stop_SS ) {
        if ( data.nightStopSec > -1 ) {
          data.nightStopSec -= 1;
          if ( data.nightStopSec == -1 ) {
            data.nightStopSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.nightStopSec);
        }
      }

      // Fade duration setup

      else if ( edit_mm1_m3_HH ) {
        if ( data.fadeHour > -1 ) {
          data.fadeHour -= 1;
          if ( data.fadeHour == -1 ) {
            data.fadeHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.fadeHour);
        }
      }
      else if ( edit_mm1_m3_MM ) {
        if ( data.fadeMin > -1 ) {
          data.fadeMin -= 1;
          if ( data.fadeMin == -1 ) {
            data.fadeMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.fadeMin);
        }
      }
      else if ( edit_mm1_m3_SS ) {
        if ( data.fadeSec > -1 ) {
          data.fadeSec -= 1;
          if ( data.fadeSec == -1 ) {
            data.fadeSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.fadeSec);
        }
      }

      // Set Date

      else if ( edit_mm2_m1_DD ) {

        if ( setDay > -1 ) {
          setDay -= 1;
          if ( setDay == -1 ) {
            setDay = 31;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setDay);
        }
      }
      else if ( edit_mm2_m1_MM ) {
        if ( setMonth > -1) {
          setMonth -= 1;
          if ( setMonth == -1 ) {
            setMonth = 12;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setMonth);
        }
      }
      else if ( edit_mm2_m1_YY ) {
        if ( setYear > 1999 ) {
          setYear -= 1;
          if ( setYear == 1999 ) {
            setYear = 3000;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setYear);
        }
      }

      // Set Hour

      else if ( edit_mm2_m2_HH ) {

        if ( setHour > -1 ) {
          setHour -= 1;
          if ( setHour == -1 ) {
            setHour = 23;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setHour);
        }
      }
      else if ( edit_mm2_m2_MM ) {
        if ( setMin > -1) {
          setMin -= 1;
          if ( setMin == -1 ) {
            setMin = 59;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setMin);
        }
      }
      else if ( edit_mm2_m2_SS ) {
        if ( setSec > -1 ) {
          setSec -= 1;
          if ( setSec == -1 ) {
            setSec = 59;
          }

          saveTime = true;

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(setSec);
        }
      }

      else {
        ms.prev(true);
        displayMenu();
      }

      break;

    case 'a': // Back presed
      if (edit_mm1_m1_start_HH) {
        edit_mm1_m1_start_HH = false;
      }
      else if (edit_mm1_m1_start_MM) {
        edit_mm1_m1_start_MM = false;
      }
      else if (edit_mm1_m1_start_SS) {
        edit_mm1_m1_start_SS = false;
      }
      else if (edit_mm1_m1_stop_HH) {
        edit_mm1_m1_stop_HH = false;
      }
      else if (edit_mm1_m1_stop_MM) {
        edit_mm1_m1_stop_MM = false;
      }
      else if (edit_mm1_m1_stop_SS) {
        edit_mm1_m1_stop_SS = false;
      }
      else if (edit_mm1_m2_start_HH) {
        edit_mm1_m2_start_HH = false;
      }
      else if (edit_mm1_m2_start_MM) {
        edit_mm1_m2_start_MM = false;
      }
      else if (edit_mm1_m2_start_SS) {
        edit_mm1_m2_start_SS = false;
      }
      else if (edit_mm1_m2_stop_HH) {
        edit_mm1_m2_stop_HH = false;
      }
      else if (edit_mm1_m2_stop_MM) {
        edit_mm1_m2_stop_MM = false;
      }
      else if (edit_mm1_m2_stop_SS) {
        edit_mm1_m2_stop_SS = false;
      }
      else if (edit_mm1_m3_HH) {
        edit_mm1_m3_HH = false;
      }
      else if (edit_mm1_m3_MM) {
        edit_mm1_m3_MM = false;
      }
      else if (edit_mm1_m3_SS) {
        edit_mm1_m3_SS = false;
      }
      else if (edit_mm2_m1_DD) {
        edit_mm2_m1_DD = false;
      }
      else if (edit_mm2_m1_MM) {
        edit_mm2_m1_MM = false;
      }
      else if (edit_mm2_m1_YY) {
        edit_mm2_m1_YY = false;
      }
      else if (edit_mm2_m2_HH) {
        edit_mm2_m2_HH = false;
      }
      else if (edit_mm2_m2_MM) {
        edit_mm2_m2_MM = false;
      }
      else if (edit_mm2_m2_SS) {
        edit_mm2_m2_SS = false;
      }
      else {
        ms.back();
      }

      displayMenu();

      break;

    case 'd': // Select presed

      ms.select(false);
      displayMenu();

      break;

    case 'r': // Select presed

      Serial.println("Report:");

      Serial.print("Start Hour morning: ");
      Serial.print(data.morningStartHour);
      Serial.print(":");
      Serial.print(data.morningStartMin);
      Serial.print(":");
      Serial.println(data.morningStartSec);

      Serial.print("Stop Hour morning: ");
      Serial.print(data.morningStopHour);
      Serial.print(":");
      Serial.print(data.morningStopMin);
      Serial.print(":");
      Serial.println(data.morningStopSec);
      
      Serial.print("Start Hour night: ");
      Serial.print(data.nightStartHour);
      Serial.print(":");
      Serial.print(data.nightStartMin);
      Serial.print(":");
      Serial.println(data.nightStartSec);

      Serial.print("Stop Hour night: ");
      Serial.print(data.nightStopHour);
      Serial.print(":");
      Serial.print(data.nightStopMin);
      Serial.print(":");
      Serial.println(data.nightStopSec);

      Serial.print("Fade Time : ");
      Serial.print(data.fadeHour);
      Serial.print(":");
      Serial.print(data.fadeMin);
      Serial.print(":");
      Serial.println(data.fadeSec);

      break;

    default:
      break;
  }
}
