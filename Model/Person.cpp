#include "Person.h"

using namespace std;

Person::Person(std::string firstName, std::string lastName, double workHours)
   :   firstName{move(firstName)}, lastName{move(lastName)}, workHours{workHours}  {}


const std::string &Person::getFirstName() const {
    return firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

double Person::getWorkHours() const {
    return workHours;
}
