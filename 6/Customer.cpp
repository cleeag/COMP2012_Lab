#include "Customer.h"

Customer::Customer(const string _id, const string _name, const string _email, float _discount)
        : Person{_id, _name}, email(_email), discount(_discount) {
}

Customer::~Customer() {
    cout << "Customer " << name << " data deleted" << endl;
}

string Customer::getEmail() const {
    return email;
}

//Todo: Implement getDiscount function, If the discount value is higher than 1, or less than 0,  return -1, otherwise print the discount value and return the discount value
float Customer::getDiscount() const {
    if (discount > 1 or discount < 0) return -1;
    else {
        cout << "Customer Discount: " << discount << endl;
        return discount;
    }
}

//Todo: implement the print function to output the customer data as same as result
void Customer::print() const {
    cout << "Customer: " << getID() << " | " << getName() << " | Email: " << email << " | Discount: " << discount
         << endl;
}