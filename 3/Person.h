#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
public:
    Person(const std::string& pname);
    std::string get_name() const;
};

#endif