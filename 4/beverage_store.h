#ifndef BEVERAGE_STORE_H
#define BEVERAGE_STORE_H

#include <iostream>

#include "regular_card.h"

using namespace std;

class BeverageStore {
public:
	BeverageStore();
	void enjoy_free_beverage(const RegularCard& mem) const;
};
#endif
