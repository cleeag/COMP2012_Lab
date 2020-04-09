#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(const string& pname): name(pname) {}

string Person::get_name() const {
    return name;
}
