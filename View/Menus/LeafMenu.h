#ifndef TA_19_LEAFMENU_H
#define TA_19_LEAFMENU_H

#include <string>
#include "Menu.h"

class LeafMenu : public Menu{
public:
    LeafMenu(std::string name, Menu* parent);
    virtual void showSubMenus() const override;
    virtual void run() override;


    static void showSemesterCourses();
    static void showStudentSemesterCourses(const std::string& studentID);
    double CalculateStudentSalary(const std::string& studentID);

};


#endif //TA_19_LEAFMENU_H
