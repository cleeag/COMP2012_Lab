#ifndef MATERIALS_H
#define MATERIALS_H

class Fabric
{
public:
  Fabric();                    // Default constructor.
  Fabric(const Fabric &other); // Copy constructor.
  ~Fabric();                   // Destructor.
};

class Wire
{
public:
  Wire();                  // Default constructor.
  Wire(const Wire &other); // Copy constructor.
  ~Wire();                 // Destructor.
};

#endif
