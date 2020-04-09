#include "materials.h"

#include <iostream>

using namespace std;

// Fabric

Fabric::Fabric()
{
    cout << "Fabric is Constructed!" << endl;
}

Fabric::Fabric(const Fabric &other)
{
    cout << "Fabric is Copied!" << endl;
}

Fabric::~Fabric()
{
    cout << "Fabric is Destructed." << endl;
}

// Wire

Wire::Wire()
{
    cout << "Wire is Constructed!" << endl;
}

Wire::Wire(const Wire &other)
{
    cout << "Wire is Copied!" << endl;
}

Wire::~Wire()
{
    cout << "Wire is Destructed." << endl;
}
