#ifndef INC_5_REGIONX_H
#define INC_5_REGIONX_H

#include "organization.h"

class RegionX: public Organization {
public:
    // Modify the function declarations below

    RegionX(const char* name, int num_patient, int num_death);

    ~RegionX();

    void print_description() const;

    bool report() const;

private:
    int num_patient;
    int num_death;

};

#endif //INC_5_REGIONX_H
