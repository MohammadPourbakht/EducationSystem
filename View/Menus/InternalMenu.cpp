#include <iostream>
#include <stdexcept>
#include "InternalMenu.h"

using namespace std;

InternalMenu::InternalMenu(std::string name, Menu* parent)
    : Menu{move(name), parent} {}

void InternalMenu::showSubMenus() const {
    cout << name << ':' << endl;

    for(size_t i{0}; i < subMenus.size(); ++i){
        cout << i+1 << ". " << subMenus[i]->getName() << endl;
    }

    if( parent == nullptr) {
        cout << subMenus.size() + 1 << ". Exit" << endl;
    }
    else{
        cout << subMenus.size() + 1 << ". Back" << endl;
    }
}

void InternalMenu::run(){
    int userInput;
    cin >> userInput;

    if( (userInput < 1)  || (userInput > subMenus.size() + 1) ){
        throw invalid_argument("The input number is wrong!!");
    }

    if( userInput == subMenus.size() + 1 ){
        if( parent == nullptr){
            controller.save();
            exit(0);
        }
        else{
            currentMenu = parent;
        }
    }
    else{
        currentMenu = subMenus[userInput -1];
    }

}
