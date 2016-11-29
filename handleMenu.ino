void handleMenu(char keyPressed) {
  //Menu const* cp_menu = ms.get_current_menu();

  switch (keyPressed) {
    case 'w': // Previus item

      // Start fade in

      if ( edit_mm1_m1_HH ) {
        if ( data.startHour < 24 ) {
          data.startHour += 1;
          if ( data.startHour == 24 ) {
            data.startHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.startHour);
        }
      }
      else if ( edit_mm1_m1_MM ) {
        if ( data.startMin < 60 ) {
          data.startMin += 1;
          if ( data.startMin == 60 ) {
            data.startMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.startMin);
        }
      }
      else if ( edit_mm1_m1_SS ) {
        if ( data.startSec < 60 ) {
          data.startSec += 1;
          if ( data.startSec == 60 ) {
            data.startSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.startSec);
        }
      }

      // Stop fade in

      else if ( edit_mm1_m2_HH ) {
        if ( data.stopHour < 24 ) {
          data.stopHour += 1;
          if ( data.stopHour == 24 ) {
            data.stopHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.stopHour);
        }
      }
      else if ( edit_mm1_m2_MM ) {
        if ( data.stopMin < 60 ) {
          data.stopMin += 1;
          if ( data.stopMin == 60 ) {
            data.stopMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.stopMin);
        }
      }
      else if ( edit_mm1_m2_SS ) {
        if ( data.stopSec < 60 ) {
          data.stopSec += 1;
          if ( data.stopSec == 60 ) {
            data.stopSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.stopSec);
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

      // Start Interval

      else if ( edit_mm1_m4_HH ) {
        if ( data.intervalStartHour < 24 ) {
          data.intervalStartHour += 1;
          if ( data.intervalStartHour == 24 ) {
            data.intervalStartHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStartHour);
        }
      }
      else if ( edit_mm1_m4_MM ) {
        if ( data.intervalStartMin < 60 ) {
          data.intervalStartMin += 1;
          if ( data.intervalStartMin == 60 ) {
            data.intervalStartMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStartMin);
        }
      }
      else if ( edit_mm1_m4_SS ) {
        if ( data.intervalStartSec < 60 ) {
          data.intervalStartSec += 1;
          if ( data.intervalStartSec == 60 ) {
            data.intervalStartSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStartSec);
        }
      }

      // End Interval

      else if ( edit_mm1_m5_HH ) {
        if ( data.intervalStopHour < 24 ) {
          data.intervalStopHour += 1;
          if ( data.intervalStopHour == 24 ) {
            data.intervalStopHour = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStopHour);
        }
      }
      else if ( edit_mm1_m5_MM ) {
        if ( data.intervalStopMin < 60 ) {
          data.intervalStopMin += 1;
          if ( data.intervalStopMin == 60 ) {
            data.intervalStopMin = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStopMin);
        }
      }
      else if ( edit_mm1_m5_SS ) {
        if ( data.intervalStopSec < 60 ) {
          data.intervalStopSec += 1;
          if ( data.intervalStopSec == 60 ) {
            data.intervalStopSec = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStopSec);
        }
      }

      // Setup days duration

      else if ( edit_mm1_m6_DD ) {
        if ( data.daysMax < 1025 ) {
          data.daysMax += 1;
          if ( data.daysMax == 1025 ) {
            data.daysMax = 0;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.daysMax);
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

      if ( edit_mm1_m1_HH ) {
        if ( data.startHour > -1 ) {
          data.startHour -= 1;
          if ( data.startHour == -1 ) {
            data.startHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.startHour);
        }
      }
      else if ( edit_mm1_m1_MM ) {
        if ( data.startMin > -1 ) {
          data.startMin -= 1;
          if ( data.startMin == -1 ) {
            data.startMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.startMin);
        }
      }
      else if ( edit_mm1_m1_SS ) {
        if ( data.startSec > -1 ) {
          data.startSec -= 1;
          if ( data.startSec == -1 ) {
            data.startSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.startSec);
        }
      }

      // Stop setup

      else if ( edit_mm1_m2_HH ) {
        if ( data.stopHour > -1 ) {
          data.stopHour -= 1;
          if ( data.stopHour == -1 ) {
            data.stopHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.stopHour);
        }
      }
      else if ( edit_mm1_m2_MM ) {
        if ( data.stopMin > -1 ) {
          data.stopMin -= 1;
          if ( data.stopMin == -1 ) {
            data.stopMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.stopMin);
        }
      }
      else if ( edit_mm1_m2_SS ) {
        if ( data.stopSec > -1 ) {
          data.stopSec -= 1;
          if ( data.stopSec == -1 ) {
            data.stopSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.stopSec);
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

      // Interval duration start

      else if ( edit_mm1_m4_HH ) {
        if ( data.intervalStartHour > -1 ) {
          data.intervalStartHour -= 1;
          if ( data.intervalStartHour == -1 ) {
            data.intervalStartHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStartHour);
        }
      }
      else if ( edit_mm1_m4_MM ) {
        if ( data.intervalStartMin > -1 ) {
          data.intervalStartMin -= 1;
          if ( data.intervalStartMin == -1 ) {
            data.intervalStartMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStartMin);
        }
      }
      else if ( edit_mm1_m4_SS ) {
        if ( data.intervalStartSec > -1 ) {
          data.intervalStartSec -= 1;
          if ( data.intervalStartSec == -1 ) {
            data.intervalStartSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStartSec);
        }
      }

      // Interval duration stop

      else if ( edit_mm1_m5_HH ) {
        if ( data.intervalStopHour > -1 ) {
          data.intervalStopHour -= 1;
          if ( data.intervalStopHour == -1 ) {
            data.intervalStopHour = 23;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStopHour);
        }
      }
      else if ( edit_mm1_m5_MM ) {
        if ( data.intervalStopMin > -1 ) {
          data.intervalStopMin -= 1;
          if ( data.intervalStopMin == -1 ) {
            data.intervalStopMin = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStopMin);
        }
      }
      else if ( edit_mm1_m5_SS ) {
        if ( data.intervalStopSec > -1 ) {
          data.intervalStopSec -= 1;
          if ( data.intervalStopSec == -1 ) {
            data.intervalStopSec = 59;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.intervalStopSec);
        }
      }

      // Setup days duration

      else if ( edit_mm1_m6_DD ) {
        if ( data.daysMax > -1 ) {
          data.daysMax -= 1;
          if ( data.daysMax == -1 ) {
            data.daysMax = 1024;
          }

          screen->setCursor(5, 2);
          screen->print("  ");
          screen->setCursor(5, 2);
          screen->print(data.daysMax);
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
      if (edit_mm1_m1_HH) {
        edit_mm1_m1_HH = false;
      }
      else if (edit_mm1_m1_MM) {
        edit_mm1_m1_MM = false;
      }
      else if (edit_mm1_m1_SS) {
        edit_mm1_m1_SS = false;
      }
      else if (edit_mm1_m2_HH) {
        edit_mm1_m2_HH = false;
      }
      else if (edit_mm1_m2_MM) {
        edit_mm1_m2_MM = false;
      }
      else if (edit_mm1_m2_SS) {
        edit_mm1_m2_SS = false;
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
      else if (edit_mm1_m4_HH) {
        edit_mm1_m4_HH = false;
      }
      else if (edit_mm1_m4_MM) {
        edit_mm1_m4_MM = false;
      }
      else if (edit_mm1_m4_SS) {
        edit_mm1_m4_SS = false;
      }
      else if (edit_mm1_m5_HH) {
        edit_mm1_m5_HH = false;
      }
      else if (edit_mm1_m5_MM) {
        edit_mm1_m5_MM = false;
      }
      else if (edit_mm1_m5_SS) {
        edit_mm1_m5_SS = false;
      }
      else if (edit_mm1_m6_DD) {
        edit_mm1_m6_DD = false;
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


      Serial.print("Days Max : ");
      Serial.println(data.daysMax);
      Serial.print("Days Run : ");
      Serial.println(data.daysRun);

      Serial.print("Start Hour : ");
      Serial.print(data.startHour);
      Serial.print(":");
      Serial.print(data.startMin);
      Serial.print(":");
      Serial.println(data.startSec);

      Serial.print("Stop Hour : ");
      Serial.print(data.stopHour);
      Serial.print(":");
      Serial.print(data.stopMin);
      Serial.print(":");
      Serial.println(data.stopSec);

      Serial.print("Interval Start: ");
      Serial.print(data.intervalStartHour);
      Serial.print(":");
      Serial.print(data.intervalStartMin);
      Serial.print(":");
      Serial.println(data.intervalStartSec);

      Serial.print("Interval End: ");
      Serial.print(data.intervalStopHour);
      Serial.print(":");
      Serial.print(data.intervalStopMin);
      Serial.print(":");
      Serial.println(data.intervalStopSec);

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




