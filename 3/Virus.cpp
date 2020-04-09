#include "Virus.h"
#include <iostream>
using namespace std;

//TODO: complete the constructor of Virus
Virus::Virus(const string& vname): name(vname) {}

//TODO: complete Virus::get_name()
string Virus::get_name() const {
    return name;
}
