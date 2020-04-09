#ifndef REGULAR_CARD_H
#define REGULAR_CARD_H
#include <iostream>
#include <string>

using namespace std;

class RegularCard {
public:
	RegularCard(int id, string na);
	void check_member_benefits() const;

	string get_name() const;
	int get_credits() const;
	void set_credits(int cre);

private:
	int card_id;
	string name;
	int credits;
};

#endif
