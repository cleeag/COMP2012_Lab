#ifndef VIP_LOUNGE_H
#define VIP_LOUNGE_H

#include <iostream>
#include "silver_card.h"

using namespace std;

class VipLounge {
public:
	VipLounge();
	void access_to_vip_lounge(const SilverCard& sil) const;
};
#endif
