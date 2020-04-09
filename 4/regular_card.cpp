#include "regular_card.h"

//TODO: Implement the constructor here，and set default value 0 for credits.
RegularCard::RegularCard(int id, string na) {
    card_id = id;
    name = na;
    credits = 0;
}

//TODO: Print "Dear regular member {name},
//             remaining benefits are {credits} credits. ".
void RegularCard::check_member_benefits() const {
    cout << "Dear regular member " << name << ", remaining benefits are "
    << credits << " credits."<< endl;
}

//TODO: Implement get_name function here.
string RegularCard::get_name() const {
    return name;
}

//TODO: Implement get_credits function here.
int RegularCard::get_credits() const {
    return credits;
}

//TODO: Implement set_credits function here.
void RegularCard::set_credits(int cre) {
    credits = cre;
}



