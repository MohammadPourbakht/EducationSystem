#ifndef TA_19_INTERNALMENU_H
#define TA_19_INTERNALMENU_H

#include <string>
#include "Menu.h"

class InternalMenu : public Menu{
public:
    InternalMenu(std::string name, Menu* parent);
    virtual void showSubMenus() const override ;
    virtual void run() override;
};


#endif //TA_19_INTERNALMENU_H
