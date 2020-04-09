//TODO: Class declaration of Virus
#ifndef VIRUS_H
#define VIRUS_H
#include <iostream>

using namespace std;

class Virus {
private:
    string name;

public:
    Virus(const string& vname);
    string get_name() const;
};

#endif