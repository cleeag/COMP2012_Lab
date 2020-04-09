//TODO: Class declaration of Coronavirus
#ifndef CORONAVIRUS_H
#define CORONAVIRUS_H
#include <iostream>
#include "Virus.h"
using namespace std;

class Coronavirus: public Virus {
private:
    string genus;

public:
    Coronavirus(const string& vname, const string& vgenus);
    string get_genus() const;
};

#endif