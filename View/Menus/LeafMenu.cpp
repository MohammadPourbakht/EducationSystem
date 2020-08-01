#include "LeafMenu.h"

using namespace std;

LeafMenu::LeafMenu(std::string name, Menu* parent)
    : Menu{move(name), parent} {}

void LeafMenu:: showSubMenus() const {}

void LeafMenu::run() {
    setCurrentMenu(parent);

    if(name == "Show This Semester Courses"){
        showSemesterCourses();
    }

    else if(name == "Take Course"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        string courseName;
        cout << "Enter Course Name: ";
        cin >> courseName;
        controller.takeCourse(ID, courseName);
    }

    else if(name == "Drop Course"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        string courseName;
        cout << "Enter Course Name: ";
        cin >> courseName;
        controller.dropCourse(ID, courseName);

    }

    else if(name == "Show Student Courses In Current Semester"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        showStudentSemesterCourses(ID);
    }

    else if(name == "Calculate Student Salary"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        CalculateStudentSalary(ID);
    }

    else if(name == "Show Professor Courses In Current Semester"){

    }

    else if(name == "Submit Grade"){

    }

    else if(name == "Calculate Professor Salary"){

    }

    else if(name == "Add Professor"){

    }

    else if(name == "Show Professors"){

    }

    else if(name == "Add Student"){
        string ID;
        cout << "Enter student number: ";
        cin >> ID;
        string first;
        cout << "Enter First Name: ";
        cin >> first;
        string last;
        cout << "Enter Last Name: ";
        cin >> last;
        controller.addStudent(ID, first, last);
    }

    else if(name == "Show Students"){

    }

    else if(name == "Add Course"){

    }

    else if(name == "Show All Courses"){

    }

    else if(name == "Read Members From File"){

    }

    else if(name == "Calculate Total Salary"){

    }

    else{
        throw invalid_argument("This Menu hase not been defined!!");
    }
}


void LeafMenu :: showSemesterCourses(){
    for(const auto& crs : controller.currentSemesterCourses){
        cout << crs.toString() << endl;
    }
}

void LeafMenu :: showStudentSemesterCourses(const std::string& studentID){
    for( auto& stu :  controller.findStudent(studentID).currentSemesterCourses ){
        cout << "Course: " << stu.first <<'\t';
    }
}

double LeafMenu :: CalculateStudentSalary(const std::string& studentID){
    double calculateStudentSalary = controller.findStudent(studentID).calculateSalary();
    return calculateStudentSalary;
}