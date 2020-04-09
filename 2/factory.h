#ifndef FACTORY_H
#define FACTORY_H

#include "materials.h"
#include "mask.h"

class Factory
{
public:
  Factory(int n_Fabrics, int n_Wires, int n_Masks);            // TODO: General constructor.
  Factory(const Factory &other);                               // TODO: Copy constructor, deep copy the shelves and the stocks in the shelves
  ~Factory();                                                  // TODO: Destructor.

  void importFabric(); // TODO: Import a box of fabric by allocating a Fabric object.
  void importWire();   // TODO: Import a box of wire by allocating a Wire object.
  void produceMask();  // TODO: Produce a mask by allocating a Mask object,
  	  	  	  	  	   // Since the production of masks requires both fabrics and metal wires,
  	  	  	  	  	   // it will consume one box of fabric and one box of wire at the top of both shelves for each box of mask.
  	  	  	  	  	   // The ownership of the top fabric and top wire are transferred to the mask,
  	  	  	  	  	   // which means the Fabric object and the Wire object are now pointed by the new Mask object instead.
  void deliverMasks(); // TODO: Deliver all masks by deleting each of the Mask object in maskShelf

  void print() const;  // print the factory summary

private:
  Fabric **fabricShelf;
  Wire **wireShelf;
  Mask **maskShelf;

  int numFabrics; // Current number of fabrics.
  int numWires;   // Current number of wires.
  int numMasks;   // Current number of masks.

  int maxNumFabrics;  // Maximal number of fabrics.
  int maxNumWires;    // Maximal number of wires.
  int maxNumMasks;    // Maximal number of masks.
};

#endif
