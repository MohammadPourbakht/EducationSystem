#include "DoubleMajorStudent.h"

using namespace std;

DoubleMajorStudent::DoubleMajorStudent(const std::string& studentId, std::string first, std::string last , double workHours,
                                       std::vector<std::string> passedCourses, std::map<std::string, double> currentSemesterCourses
                                       ,std::string mjr2 )
        : Student(studentId,(std::move(first)), (std::move(last)), workHours ,
          move(passedCourses), move(currentSemesterCourses))  , major2(move(mjr2)) {}


std::ostream& operator<<(std::ostream & output, const DoubleMajorStudent& student){
    output << student.studentId << '\t' << student.getFirstName() << '\t' << student.getLastName()
           << '\t' << student.getWorkHours() << '\t' << student.passedCourses.size() <<'\t' << '\t';

    for(const auto& course : student.passedCourses){
        output << course << '\t';
    }

    output << student.currentSemesterCourses.size() << '\t';

    for(const auto& item : student.currentSemesterCourses){
        output << item.first << '\t' << item.second << '\t';
    }
    output << student.major2 ;
    return output;
}


std::istream& operator>>(std::istream & input, DoubleMajorStudent& student){
    string id;
    string first;
    string last;
    double wh;
    vector<string> passed;
    map<string, double> current;
    int passedSize;
    int currentSize;
    string course;
    double grade;
    input >> id >> first >> last >> wh >> passedSize;

    for( size_t i{0}; i < passedSize; ++i ){
        input >> course;
        passed.push_back(course);
    }

    input >> currentSize;
    for( size_t i{0}; i < currentSize; ++i ){
        input >> course >> grade;
        current.insert({course, grade});
    }

    string majarTwo;
    input >> majarTwo;
    DoubleMajorStudent stu{id, first, last, wh, passed, current , majarTwo};
    student = stu;
    return input;
}


double DoubleMajorStudent::calculateSalary() const{
    return 6500 * getWorkHours();
}

const string &DoubleMajorStudent::getMajor2() const {
    return major2;
}

void DoubleMajorStudent::setMajor2(const string &major2) {
    DoubleMajorStudent::major2 = major2;
}

