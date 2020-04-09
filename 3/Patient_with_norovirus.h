//TODO: Class declaration of Patient_with_norovirus
#ifndef PATIENT_WITH_NOROVIRUS_H
#define PATIENT_WITH_NOROVIRUS_H

#include "Patient.h"
#include "Norovirus.h"
#include "iostream"

using namespace std;

class Patient_with_norovirus : public Patient {
private:
    Norovirus norovirus;
public:
    Patient_with_norovirus(const string &pname, int page, const string &norovirus_name,
                           const string &norovirus_genogroup);


    void print_virus_info() const;
};

#endif