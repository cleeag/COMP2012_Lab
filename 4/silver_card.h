#ifndef SILVER_CARD_H
#define SILVER_CARD_H

#include <string>
#include <iostream>
#include <cmath>
#include "regular_card.h"


using namespace std;

class SilverCard : public RegularCard {
private:
	int number_of_coupons;
public:
	SilverCard(int id, string na, int coup);
	int get_number_of_coupons() const;

	void check_member_benefits() const;
	void exchange_credits_for_coupons(int coup);
};

#endif

