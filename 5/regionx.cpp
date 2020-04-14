#include <iostream>
#include <cstring>

#include "regionx.h"

using namespace std;

RegionX::RegionX(const char *name, int num_patient, int num_death) : Organization(name) {
    this->num_patient = num_patient;
    this->num_death = num_death;
}


RegionX::~RegionX() {
    cout << "RegionX Dtor" << endl;
}

void RegionX::print_description() const {
    Organization::print_description();
    cout << " Type: RegionX" << endl;
}

bool RegionX::report() const {
    float death_rate = static_cast<double>(num_death) / static_cast<double>(num_patient);
    if (death_rate > 0.03) {
        cout << "Death rate: " << death_rate * 100 << "% > 3%, severe!" << endl;
        return true;
    } else if (death_rate <= 0.03) {
        cout << "Death rate: " << death_rate * 100 << "% <= 3%, not severe!" << endl;
        return false;
    }
}