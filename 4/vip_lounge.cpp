#include "vip_lounge.h"

VipLounge::VipLounge() {}

//TODO: Print "Dear {get_name}, please enjoy your time here.".
void VipLounge::access_to_vip_lounge(const SilverCard& sil) const {
    cout << "Dear " << sil.get_name() << ", please enjoy your time here．" << endl;

}
