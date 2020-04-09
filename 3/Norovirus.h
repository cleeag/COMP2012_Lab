//TODO: Class declaration of Norovirus
#ifndef NOROVIRUS_H
#define NOROVIRUS_H
#include <iostream>
#include "Virus.h"
using namespace std;

class Norovirus: public Virus {
private:
    string genogroup;

public:
    Norovirus(const string& vname, const string& vgenus);
    string get_genogroup() const;
};

#endif