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
  else if ( left.fell()) {
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




