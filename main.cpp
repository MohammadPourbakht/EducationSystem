//#include <iostream>
//#include <fstream>
//#include "Model/Student.h"
//#include "Model/Professor.h"
//#include "Model/Course.h"
#include "View/View.h"

using namespace std;

int main() {
//    vector<string> passedCourses{"Math", "Physics", "AP"};
//    map<string, double> semesterCourses{{"Database", 18}, {"Statistics", 17.5}};
//    Student student{"952023016", "Farhang",
//                    "Doroudian", 25.7, passedCourses, semesterCourses};
//
//    ofstream output("student.txt");
//    output << student << endl;
//
//    Student stu;
//    ifstream input("student.txt");
//    input >> stu;
//    cout << stu << endl;

//    Professor professor{"2318", "Ali", "Alavi", 47.3, "Prof"};
//    ofstream output("prof.txt");
//    output << professor << endl;
//
//    Professor profe;
//    ifstream input("prof.txt");
//    input >> profe;
//    cout << profe << endl;

//    Course course{"Math2", "Sadeghi", "98-2", {"Math1"}};
//    ofstream output("course.txt");
//    output << course << endl;
//
//    Course crs;
//    ifstream input("course.txt");
//    input >> crs;
//    cout << crs << endl;

    Controller myController{"99-1"};
    View myView{myController};
    myView.exec();
    return 0;
}
