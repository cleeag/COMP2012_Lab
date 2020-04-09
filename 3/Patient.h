//TODO: Class declaration of Patient
#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "string"
#include "iostream"
using namespace std;

class Patient : public Person {
private:
    int age;
public:
//    Patient(string pname="");
    Patient(const string& pname="", int page=0);
    int get_age() const;
};

#endif