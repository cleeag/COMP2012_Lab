//TODO: Class declaration of Patient_with_coronavirus
#ifndef PATIENT_WITH_CORONAVIRUS_H
#define PATIENT_WITH_CORONAVIRUS_H

#include "Patient.h"
#include "Coronavirus.h"
#include "iostream"
using namespace std;

class Patient_with_coronavirus : public Patient {
private:
    string travel_history;
    Coronavirus coronavirus;
public:
    Patient_with_coronavirus(const string &pname, int page, const string &ptravel_history,
                             const string &coronavirus_name, const string &coronavirus_genus);
    void print_travel_history() const;
    void print_virus_info() const;
};

#endif