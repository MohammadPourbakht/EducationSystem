#include "Menu.h"

Controller Menu::controller = Controller();
Menu* Menu::currentMenu = nullptr;

using namespace std;

Menu::Menu(std::string name, Menu* parent)
   : name{move(name)}, parent{parent}  {}

const string &Menu::getName() const {
    return name;
}

void Menu::setSubMenus(const vector<Menu *> &subMenus) {
    Menu::subMenus = subMenus;
}

void Menu::setController(const Controller &controller) {
    Menu::controller = controller;
}

void Menu::setCurrentMenu(Menu *currentMenu) {
    Menu::currentMenu = currentMenu;
}

Menu *Menu::getCurrentMenu() {
    return currentMenu;
}
