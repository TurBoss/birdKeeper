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

void displayMenu() {

  // Display the menu
  Menu const* cp_menu = ms.get_current_menu();

  screen->clear();
  screen->setCursor(1, 0);
  screen->print(cp_menu->get_name());
  screen->setCursor(0, 2);
  screen->print(">>");

  int elements_num = cp_menu->get_num_menu_components();
  int selected_menu = cp_menu->get_cur_menu_component_num();

  int slot1 = selected_menu - 1;
  int slot2 = selected_menu;
  int slot3 = selected_menu + 1;

  if (slot1 >= 0) {

    MenuComponent const* cp_m_comp1 = cp_menu->get_menu_component(slot1);

    screen->setCursor(2, 1);
    screen->print(cp_m_comp1->get_name());
  }

  MenuComponent const* cp_m_comp1 = cp_menu->get_menu_component(slot2);

  screen->setCursor(2, 2);
  screen->print(cp_m_comp1->get_name());

  if (slot3 < elements_num) {

    MenuComponent const* cp_m_comp1 = cp_menu->get_menu_component(slot3);

    screen->setCursor(2, 3);
    screen->print(cp_m_comp1->get_name());
  }
}
