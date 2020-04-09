#include "Norovirus.h"
#include <iostream>
using namespace std;


//TODO: complete the constructor of Norovirus
Norovirus::Norovirus(const string& vname, const string& vgenogroup): Virus(vname), genogroup(vgenogroup) {}


//TODO: complete Norovirus::get_genogroup
string Norovirus::get_genogroup() const {
    return genogroup;
}