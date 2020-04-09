#include "gold_card.h"

#include "silver_card.h"

//TODO: Implement the constructor here.
GoldCard::GoldCard(int id, string na, int coup, int tick) : SilverCard(id, na, coup) {
    number_of_free_tickets = tick;
}

//TODO: Print "Dear regular member {name},
//            remaining benefits are {get_credits} credits,
//                                   {get_number_of_cupons} coupons,
//                                   {number_of_free_tickets} free tickets. ".
void GoldCard::check_member_benefits() const {
    cout << "Dear gold member " << get_name() << ", remaining benefits are "
         << get_credits() << " credits, " << get_number_of_coupons() << " coupons, "
         << number_of_free_tickets << " free tickets." << endl;
}

//TODO: Exchange credits for tick free tickets (20 credits for 1 coupon).
void GoldCard::exchange_credits_for_free_tickets(int tick) {
    if (tick <= 0) {
        cout << "SORRY, the input must be positive." << endl;
    } else {
        int credits = get_credits();
        int got_tick = 0;
        while (credits > 0 and got_tick < tick) {
            credits -= 20;
            got_tick += 1;
        }
        set_credits(credits);
        number_of_free_tickets += got_tick;
    }
}
