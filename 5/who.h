#ifndef INC_5_WHO_H
#define INC_5_WHO_H

#include "organization.h"
const int MAX_NUM_WATCHLIST = 5;

class WHO: public Organization {
public:
    // Modify the function declarations below

    WHO(const char* name);

    ~WHO();

    void print_description() const;

    bool report() const;

    void watch(Organization *new_organization);


private:
    Organization *watchlist[MAX_NUM_WATCHLIST];
    int num_watchlist = 0;

};

#endif //INC_5_WHO_H
