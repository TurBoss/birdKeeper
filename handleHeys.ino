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

void handleKeys() {

  // Update the Bouncers:

  up.update();
  down.update();
  left.update();
  right.update();

  char keyPressed = 0;

  if (up.fell()) {
    keyPressed = 'w';
  }
  else if (down.fell()) {
    keyPressed = 's';
  }
  else if (left.fell()) {
    keyPressed = 'a';
  }
  else if (right.fell()) {
    keyPressed = 'd';
  }

  if (keyPressed != 0) {
    handleMenu(keyPressed);
    backlightOn = true;
    backlightCounter = 30;

    screen->on();
  }
}
