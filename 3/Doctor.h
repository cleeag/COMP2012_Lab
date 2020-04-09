//TODO: Class declaration of Doctor
#ifndef DOCTOR_H
#define DOCTOR_H
#include "Person.h"
#include "Patient.h"
#include <string>

class Doctor: public Person {
private:
    std::string name;
    int num_of_patient;
    Patient *patient_list;
public:
    Doctor(const std::string& pname);
    void responsible_for(Patient const* patient);
    void print_patient_name_list() const;
    };

#endif
//define the const int MAX_NUM_OF_PATIENTS to be 15 here
const int MAX_NUM_OF_PATIENTS = 15;