#include <iostream>
#include "Patient_with_coronavirus.h"

using namespace std;


//TODO: complete the constructor of Patient_with_coronavirus
Patient_with_coronavirus::Patient_with_coronavirus(const string &pname, int page, const string &ptravel_history,
                                                   const string &coronavirus_name, const string &coronavirus_genus):
                                                   Patient(pname, page), travel_history(ptravel_history),
                                                   coronavirus(coronavirus_name, coronavirus_genus){}


//TODO: complete Patient_with_coronavirus::print_travel_history
void Patient_with_coronavirus::print_travel_history() const {
    //print "{name} has traveled to : {place}."
    cout << get_name() << " has traveled to : " << travel_history << "." << endl;
}

//TODO: complete Patient_with_coronavirus::print_virus_info
void Patient_with_coronavirus::print_virus_info() const {
    //print "{name} is infected with {the name of the virus}, which belongs to {virus's genus} genus."
    cout << get_name() << " is infected with " << coronavirus.get_name()
    << ", which belongs to " << coronavirus.get_genus() << " genus." << endl;
}