#include "mask.h"

#include <iostream>

using namespace std;

// Mask
// TODO: Initialize the Mask object by shallow copying the Fabric and the Wire objects
Mask::Mask(Fabric *fabric, Wire *wire)
{
    this->fabric = fabric;
    this->wire = wire;
    cout << "Mask is Constructed!" << endl;
}

Mask::Mask(const Mask &other)
{
	// TODO: Deep copy the data members of the "other" mask
    fabric = new Fabric(*other.fabric);
    wire = new Wire(*other.wire);
    cout << "Mask is Copied!" << endl;
}

Mask::~Mask()
{
	// TODO: Destruct the data members
    delete fabric;
    delete wire;
    cout << "Mask is Destructed." << endl;
}
