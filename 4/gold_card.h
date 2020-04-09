#ifndef GOLD_CARD_H
#define GOLD_CARD_H

#include "silver_card.h"

class GoldCard: public SilverCard {
private:
	int number_of_free_tickets;
public:
	GoldCard(int id, string na, int coup, int tick);

	void check_member_benefits() const;
	void exchange_credits_for_free_tickets(int tick);
};

#endif
