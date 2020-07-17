#ifndef TA_19_MENU_H
#define TA_19_MENU_H

#include <string>
#include <vector>
#include "../../Controller/Controller.h"

class Menu {
protected:
    std::string name;
    Menu* parent;
    std::vector<Menu*> subMenus;

    static Controller controller;
    static Menu* currentMenu;

public:
    Menu(std::string name, Menu* parent);

    const std::string &getName() const;

    static Menu *getCurrentMenu();

    virtual ~Menu() = default;

    void setSubMenus(const std::vector<Menu *> &subMenus);

    static void setController(const Controller &controller);

    static void setCurrentMenu(Menu *currentMenu);

    virtual void showSubMenus() const = 0;
    virtual void run() = 0;

};


#endif //TA_19_MENU_H
