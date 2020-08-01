#include "DoubleMajorStudent.h"

using namespace std;

DoubleMajorStudent::DoubleMajorStudent(const std::string& studentId, std::string first, std::string last , double workHours,
                                       std::vector<std::string> passedCourses, std::map<std::string, double> currentSemesterCourses
                                       ,std::string mjr2 )
        : Student(studentId,(std::move(first)), (std::move(last)), workHours ,
          move(passedCourses), move(currentSemesterCourses))  , major2(move(mjr2)) {}



