#ifndef TA_19_PERSON_H

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}

void Person::setWorkHours(double workHours) {
    Person::workHours = workHours;
}

#define TA_19_PERSON_H

#include <string>

class Person {
private:
   std::string firstName;
   std::string lastName;
   double workHours;
public:
    virtual const std::string &getFirstName() const final;
    virtual const std::string &getLastName() const final;
    virtual double getWorkHours() const final;

    Person(std::string firstName, std::string lastName, double workHours);
    Person() = default;
    virtual ~Person() = default;
    virtual double calculateSalary() const = 0;

    void setFirstName(const std::string &firstName);

    void setLastName(const std::string &lastName);

    void setWorkHours(double workHours);
    // pure virtual function
};


#endif //TA_19_PERSON_H
