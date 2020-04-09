#include <iostream>
#include "Patient.h"
#include "Person.h"
using namespace std;


//TODO: complete the constructor of Patient
//Patient::Patient(string pname, int page): Person(pname) age(page){}
Patient::Patient(const string& pname, int page): Person(pname), age(page) {}

//TODO: complete Patient::get_age
int Patient::get_age() const {
    return age;
}