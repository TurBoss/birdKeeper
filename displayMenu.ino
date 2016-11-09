void displayMenu() {

  // Display the menu
  Menu const* cp_menu = ms.get_current_menu();
  //int menu_position = cp_menu->get_cur_menu_component_num();

  screen->clear();
  screen->setCursor(1, 0);
  screen->print(cp_menu->get_name());
  screen->setCursor(0, 2);
  screen->print(">>");

  //MenuComponent const* cp_menu_sel = cp_menu->get_selected();

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
