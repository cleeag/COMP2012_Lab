#include <iostream>
#include <cstring>

#include "who.h"

using namespace std;

WHO::WHO(const char *name) : Organization(name) {}


WHO::~WHO() {
    for (int i = 0; i < num_watchlist; ++i) {
        delete watchlist[i];
    }
    cout << "WHO Dtor" << endl;
}

void WHO::print_description() const {
    Organization::print_description();
    cout << " Type: " << "WHO" << endl;
}

void WHO::watch(Organization *new_organization) {
    watchlist[num_watchlist] = new_organization;
    num_watchlist += 1;
}


bool WHO::report() const {
    int num_severe = 0;
    for (int i = 0; i < num_watchlist; ++i) {
        watchlist[i]->print_description();
        bool is_severe = watchlist[i]->report();
        if (is_severe) num_severe += 1;
    }

    float severe_rate = static_cast<double>(num_severe) / static_cast<double>(num_watchlist);
    if (severe_rate > 0.5) {
        cout << "Severe regions: " << num_severe << "/" << num_watchlist << ", severe!" << endl;
        return true;
    } else {
        cout << "Severe regions: " << num_severe << "/" << num_watchlist << ", not severe!" << endl;
        return false;
    }
}