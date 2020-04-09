#include "factory.h"

#include <iostream>
#include <iomanip>

using namespace std;

// TODO: Complete the member initialization list
// numFabrics, numWires, numMasks should be initialized to be 0
// maxNumFabrics, maxNumWires, maxNumMasks should be initialized to their assigned values
Factory::Factory(int n_Fabrics, int n_Wires, int n_Masks)
	: numFabrics(0), numWires(0), numMasks(0),
	maxNumFabrics(n_Fabrics), maxNumWires(n_Wires), maxNumMasks(n_Masks)
{
    // TODO: Allocate memory for fabrics, wires and masks.
	// Hints: refer to the hint 1 in the lab webpage
    fabricShelf = new Fabric *[maxNumFabrics];
    wireShelf = new Wire *[maxNumWires];
    maskShelf = new Mask *[maxNumMasks];

    // Finish constructing with printing.
    cout << "Factory is Constructed!" << endl;
}

Factory::Factory(const Factory &other) //Copy constructor, deep copy the shelves and the stocks in the shelves.
{
    // Clone the fabric shelf.
	// To make the lab easier, the fabric shelf is done for you.
	numFabrics = other.numFabrics;
	maxNumFabrics = other.maxNumFabrics;
    numWires = other.numWires;
    maxNumWires = other.maxNumWires;
    numMasks = other.numMasks;
    maxNumMasks = other.maxNumMasks;

	fabricShelf = new Fabric *[maxNumFabrics];
    for (int i = 0; i < numFabrics; ++i)
    {
    	fabricShelf[i] = new Fabric(*other.fabricShelf[i]);
    }
    // TODO: Clone the wire shelf.
    wireShelf = new Wire *[maxNumWires];
    for (int i = 0; i < numWires; ++i)
    {
        wireShelf[i] = new Wire(*other.wireShelf[i]);
    }
    // TODO: Clone the mask shelf.
    maskShelf = new Mask *[maxNumMasks];
    for (int i = 0; i < numMasks; ++i)
    {
        maskShelf[i] = new Mask(*other.maskShelf[i]);
    }
    // Finish copying with printing.
    cout << "Factory is Copied!" << endl;
}

Factory::~Factory()
{

	// Hints: refer to the hint 2 in the lab webpage

    // TODO: Destruct the fabric shelf.
    for (int i = 0; i < numFabrics; ++i) delete fabricShelf[i];
    delete [] fabricShelf;
    // TODO: Destruct the wire shelf.
    for (int i = 0; i < numWires; ++i) delete wireShelf[i];
    delete [] wireShelf;
    // TODO: Destruct the mask shelf.
    for (int i = 0; i < numMasks; ++i) delete maskShelf[i];
    delete [] maskShelf;
    // Finish destructing with printing.
    cout << "Factory is Destructed." << endl;
}

void Factory::importFabric()
{
    if (numFabrics >= maxNumFabrics)
    {
        cout << "Error: Fabric shelf is full, importation failed." << endl;
    }
    else
    {
        // TODO: Import a unit of fabric by allocating a Fabric object and add it to the top of fabric Shelf
        fabricShelf[numFabrics] = new Fabric();
        numFabrics += 1;
    }
}

void Factory::importWire()
{
    if (numWires >= maxNumWires)
    {
        cout << "Error: Wire shelf is full, importation failed." << endl;
    }
    else
    {
        // TODO: Import a unit of wire by allocating a Wire object.
        wireShelf[numWires] = new Wire();
        numWires += 1;
    }
}

void Factory::produceMask()
{
    if (numMasks >= maxNumMasks)
    {
        cout << "Error: Mask shelf is full, production failed." << endl;
    }
    else if (numWires < 1 || numFabrics < 1)
    {
        cout << "Error: No enough materials for producing a mask" << endl;
    }
    else
    {
        // TODO: Produce a mask by allocating a Mask object,
        // Since the production of a mask requires both a unit of fabric and a wire strip,
        // it will consume one unit of fabric and one unit of wire at the top of both shelves.
        // The ownership of the top fabric and top wire are transferred to the mask,
        // which means the Fabric object and the Wire object should now be pointed by the new Mask object instead.
        maskShelf[numMasks] = new Mask(fabricShelf[numFabrics - 1], wireShelf[numWires - 1]);
        fabricShelf[numFabrics - 1] = nullptr;
        wireShelf[numWires - 1] = nullptr;
        numMasks += 1;
        numFabrics -= 1;
        numWires -= 1;
    }
}


void Factory::deliverMasks()
{
	// TODO: Deliver all masks by deleting each of them in the maskShelf
    for (int i = 0; i < numMasks; ++i) delete maskShelf[i];
    numMasks = 0;
}

void Factory::print() const
{
    cout << "-------------------" << endl;
    cout << "| Factory Summary |" << endl;
    cout << "-------------------" << endl;
    cout << "|"<<setw(7)<<"Fabric"<<setw(5)<<"(" << numFabrics << "/" << maxNumFabrics << ") |" << endl;
    cout << "|"<<setw(7)<<"Wire"  <<setw(5)<<"(" << numWires   << "/" << maxNumWires   << ") |" << endl;
    cout << "|"<<setw(7)<<"Mask"  <<setw(5)<<"(" << numMasks   << "/" << maxNumMasks   << ") |" << endl;
    cout << "-------------------" << endl;
}
