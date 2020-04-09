#include "regular_card.h"
#include "silver_card.h"


//TODO: Implement the constructor here.
SilverCard::SilverCard(int id, string na, int coup) : RegularCard(id, na) {
    number_of_coupons = coup;
}

//TODO: Implement the get_number_of_coupons function here.
int SilverCard::get_number_of_coupons() const {
    return number_of_coupons;
}

//TODO: Print "Dear regular member {name},
//             remaining benefits are {get_credits} credits,
//                                    {number_of_cupons} coupons. ".
void SilverCard::check_member_benefits() const {
    cout << "Dear silver member " << get_name() << ", remaining benefits are "
         << get_credits() << " credits, " << get_number_of_coupons() << " coupons." << endl;
}

//TODO: Exchange credits for coup coupons (5 credits for 1 coupon).
void SilverCard::exchange_credits_for_coupons(int coup) {
    if (coup <= 0) {
        cout << "SORRY, the input must be positive." << endl;
    } else if (get_credits() < 5 * coup) {
        cout << "SORRY, not enough credits for " << coup << " coupons." << endl;
        cout << "You have " << get_credits() << " credits left and can only exchange for " << get_credits() / 5
             << " coupons." << endl;
    } else {
        int credits = get_credits();
        int got_coup = 0;
        while (credits > 0 and got_coup < coup) {
            credits -= 5;
            got_coup += 1;
        }
        set_credits(credits);
        number_of_coupons += got_coup;
    }
}

