#include <iostream>
#include <cstring>

#include "regiony.h"

using namespace std;

RegionY::RegionY(const char *name, int num_patient, int num_death) : Organization(name) {
    this->num_patient = num_patient;
    this->num_death = num_death;
}


RegionY::~RegionY() {
    cout << "RegionY Dtor" << endl;
}

void RegionY::print_description() const {
    Organization::print_description();
    cout << " Type: RegionY" << endl;
}

bool RegionY::report() const {
    float death_rate = static_cast<double>(num_death) / static_cast<double>(num_patient);
    if (death_rate > 0.04) {
        cout << "Death rate: " << death_rate * 100 << "% > 4%, severe!" << endl;
        return true;
    } else if (death_rate <= 0.04) {
        cout << "Death rate: " << death_rate * 100 << "% <= 4%, not severe!" << endl;
        return false;
    }
}