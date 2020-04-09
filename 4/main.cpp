#include <iostream>
#include "silver_card.h"
#include "gold_card.h"
#include "beverage_store.h"
#include "vip_lounge.h"
#include "regular_card.h"

using namespace std;

int main() {
	cout << "1. Sam applied a member card." << endl;
	RegularCard sam(123, "Sam");
	sam.check_member_benefits();

	cout << endl << "2. Amy applied a silver card, and got 5 coupons as first-time offer." << endl;
	SilverCard amy(211, "Amy", 5);
	amy.check_member_benefits();

	cout << endl << "3. Tom applied a gold card, and got 5 coupons and 2 free tickets as first-time offer." << endl;
	GoldCard tom(214, "Tom", 5, 2);
	tom.check_member_benefits();

	cout << endl << "4. Sam, Amy and Tom used their member cards at beverage store." << endl;
	BeverageStore beverage_store;
	beverage_store.enjoy_free_beverage(sam);
	beverage_store.enjoy_free_beverage(amy);
	beverage_store.enjoy_free_beverage(tom);

	cout << endl << "5. Amy and Tom went to the VIP lounge for a good rest." << endl;
    VipLounge vip_lounge;
    vip_lounge.access_to_vip_lounge(amy);
    vip_lounge.access_to_vip_lounge(tom);

    cout << endl << "6. Sam, Amy and Tom watched 3 movies together, thus getting 45 points individually." << endl;
    sam.set_credits(45);
    amy.set_credits(45);
    tom.set_credits(45);
    sam.check_member_benefits();
    amy.check_member_benefits();
    tom.check_member_benefits();

    cout << endl << "7. Amy wanted to exchange for 10 coupons but can only exchange for 9 coupons." << endl;
    amy.exchange_credits_for_coupons(10);
    amy.exchange_credits_for_coupons(9);
    amy.check_member_benefits();

    cout << endl << "8. Tom exchanged credits for 1 coupon and 1 free ticket" << endl;
    tom.exchange_credits_for_coupons(1);
    tom.exchange_credits_for_free_tickets(1);
    tom.check_member_benefits();

    cout << endl << "9. Slicing effect" << endl;
    RegularCard* tomp = &tom;
    RegularCard regular(0, "unknown");
    regular = tom;
    tomp->check_member_benefits();
    regular.check_member_benefits();


	cout << endl;
	return 1;
}

