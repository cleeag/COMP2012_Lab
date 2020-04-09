#include "Coronavirus.h"
#include <iostream>
using namespace std;

// TODO: complete the constructor of Coronavirus
Coronavirus::Coronavirus(const string& vname, const string& vgenus): Virus(vname), genus(vgenus) {}

// TODO: complete Coronavirus::get_genus
string Coronavirus::get_genus() const {
    return genus;
}