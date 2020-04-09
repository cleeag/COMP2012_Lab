#include "beverage_store.h"

BeverageStore::BeverageStore() {}

//TODO: Print "Dear {get_name}, please enjoy your free beverage．".
void BeverageStore::enjoy_free_beverage(const RegularCard& mem) const {
    cout << "Dear " << mem.get_name() << ", please enjoy your free beverage．" << endl;
}
