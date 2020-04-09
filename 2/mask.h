#ifndef MASK_H
#define MASK_H

#include "materials.h"

class Mask
{
public:
  Mask(Fabric *fabric, Wire *wire); // TODO: General constructor, shallow copy the fabric and wire.
  Mask(const Mask &other);          // TODO: Copy constructor, deep copy the fabric and wire.
  ~Mask();                          // TODO: Destructor.

private:
  Fabric *fabric;
  Wire *wire;
};

#endif
