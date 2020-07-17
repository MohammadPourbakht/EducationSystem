#include "Professor.h"

using namespace std;

Professor::Professor(std::string id, std::string first, std::string last,
        double wh, std::string title)
        :  Person(move(first), move(last), wh), profId{move(id)}, title{move(title)} {}

double Professor::calculateSalary() const{
    return 4'000'000 + 10000*getWorkHours();
}

std::ostream& operator<<(std::ostream & output, const Professor& prof){
    output << prof.profId << '\t' << prof.getFirstName() << '\t' <<
              prof.getLastName()  << '\t' << prof.getWorkHours() << '\t' << prof.title;

    return output;
}

std::istream& operator>>(std::istream & input, Professor& prof){
    string id;
    string first;
    string last;
    string title;
    double wh;
    input >> id >> first >> last >> wh >> title;
    Professor pf{id, first, last, wh, title};
    prof = pf;
    return input;
}