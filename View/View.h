#ifndef TA_19_VIEW_H
#define TA_19_VIEW_H

#include "../Controller/Controller.h"
#include "Menus/InternalMenu.h"
#include "Menus/CommandsFromFileMenu.h"
#include "Menus/LeafMenu.h"

class View {
private:
    Controller controller;

public:
    explicit View(Controller controller);
    void makeMenus( Menu* root );
    void exec();
};


#endif //TA_19_VIEW_H
