void drawConfig() {
  if (editMenu == 1) {
    if (edit_mm1_m1_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.startHour);
    }
    else if (edit_mm1_m1_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.startMin);
    }
    else if (edit_mm1_m1_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.startSec);
    }
  }
  else if (editMenu == 2) {
    if (edit_mm1_m2_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.stopHour);
    }
    else if (edit_mm1_m2_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.stopMin);
    }
    else if (edit_mm1_m2_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.stopSec);
    }
  }
  else if (editMenu == 3) {
    if (edit_mm1_m3_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.fadeHour);
    }
    else if (edit_mm1_m3_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.fadeMin);
    }
    else if (edit_mm1_m3_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.fadeSec);
    }
  }
  else if (editMenu == 4) {
    if (edit_mm1_m4_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.intervalStartHour);
    }
    else if (edit_mm1_m4_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.intervalStartMin);
    }
    else if (edit_mm1_m4_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.intervalStartSec);
    }
  }
  else if (editMenu == 5) {
    if (edit_mm1_m5_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.intervalStopHour);
    }
    else if (edit_mm1_m5_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.intervalStopMin);
    }
    else if (edit_mm1_m5_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.intervalStopSec);
    }
  }
  else if (editMenu == 6) {
    if (edit_mm1_m6_DD) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.daysMax);
    }
  }
  else if (editMenu == 7) {
    if (edit_mm2_m1_DD) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(day());
    }
    else if (edit_mm2_m1_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(month());
    }
    else if (edit_mm2_m1_YY) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(year());
    }
  }
  else if (editMenu == 8) {
    if (edit_mm2_m2_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(day());
    }
    else if (edit_mm2_m2_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(month());
    }
    else if (edit_mm2_m2_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(year());
    }
  }
  drawSetup = false;
}
