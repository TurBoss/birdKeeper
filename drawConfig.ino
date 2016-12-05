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

void drawConfig() {
  if (editMenu == 1) {
    if (edit_mm1_m1_start_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.morningStartHour);
    }
    else if (edit_mm1_m1_start_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.morningStartMin);
    }
    else if (edit_mm1_m1_start_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.morningStartSec);
    }
  }
  else if (editMenu == 2) {
    if (edit_mm1_m1_stop_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.morningStopHour);
    }
    else if (edit_mm1_m1_stop_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.morningStopMin);
    }
    else if (edit_mm1_m1_stop_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.morningStopSec);
    }
  }

  else if (editMenu == 3) {
    if (edit_mm1_m2_start_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.nightStartHour);
    }
    else if (edit_mm1_m2_start_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.nightStartMin);
    }
    else if (edit_mm1_m2_start_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.nightStartSec);
    }
  }
  else if (editMenu == 4) {
    if (edit_mm1_m2_stop_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.nightStopHour);
    }
    else if (edit_mm1_m2_stop_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.nightStopMin);
    }
    else if (edit_mm1_m2_stop_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(data.nightStopSec);
    }
  }
  
  else if (editMenu == 5) {
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
  else if (editMenu == 7) {
    if (edit_mm2_m1_DD) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(setDay);
    }
    else if (edit_mm2_m1_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(setMonth);
    }
    else if (edit_mm2_m1_YY) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(setYear);
    }
  }
  else if (editMenu == 8) {
    if (edit_mm2_m2_HH) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(setHour);
    }
    else if (edit_mm2_m2_MM) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(setMin);
    }
    else if (edit_mm2_m2_SS) {
      screen->setCursor(5, 2);
      screen->print("  ");
      screen->setCursor(5, 2);
      screen->print(setSec);
    }
  }
  drawSetup = false;
}
