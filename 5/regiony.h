#ifndef INC_5_REGIONY_H
#define INC_5_REGIONY_H

#include "organization.h"

class RegionY: public Organization {
public:
    // Modify the function declarations below

    RegionY(const char* name, int num_patient, int num_death);

    ~RegionY();

    void print_description() const;

    bool report() const;

private:
    int num_patient;
    int num_death;

};

#endif //INC_5_REGIONY_H
