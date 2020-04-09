#include <iostream>
#include "Doctor.h"
#include "Patient.h"
using namespace std;

//TODO: complete the constructor of Doctor
Doctor::Doctor(const string& pname): Person(pname) {
    patient_list = new Patient [MAX_NUM_OF_PATIENTS - 1];
    num_of_patient = 0;
}

//TODO: complete Doctor::responsible_for
void Doctor::responsible_for(Patient const* patient) {
    if (num_of_patient >= MAX_NUM_OF_PATIENTS)
        cout << "Reach the maximum number of patients." << endl;
    //add new patient to the end of the patient list
    //increment the number of patients
    //print "Doctor {doctor's name} is responsible for patient {patient's name}."
    patient_list[num_of_patient] = *patient;
    num_of_patient += 1;
    cout << "Doctor "<< get_name() <<" is responsible for patient " << patient->get_name()<< "." << endl;
}

//TODO:complete Doctor::print_patient_name_list
void Doctor::print_patient_name_list() const {
    //print "Doctor {doctor's name}'s patients:\n"
    //print information of each patient like: "Patient {number}: {patient's name}, age {patient's age}\n"
    cout <<"Doctor " << get_name() << "'s patients:" << endl;
    for (int i = 0; i < num_of_patient; ++i) {
        cout << "Patient " << i << ": " << patient_list[i].get_name()
        << ", age " << patient_list[i].get_age() << endl;
    }
}
