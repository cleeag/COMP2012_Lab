#include <iostream>

#include "factory.h"

using namespace std;

int main()
{
    cout << "1. Open the factory!" << endl;
    Factory factory(5, 5, 5);
    factory.print();

    cout << "\n2. Try to make a mask with only 2 piece of fabric, the mask would not be fitted securely, failed." << endl;
    factory.importFabric();
    factory.importFabric();
    factory.print();
    factory.produceMask();

    cout << "\n3. Make a mask with both fabrics and wires, the mask has a better quality now, succeed." << endl;
    factory.importWire();
    factory.print();
    factory.produceMask();
    factory.print();

    cout << "\n4. Prepare the fabric and wire again." << endl;
    factory.importFabric();
    factory.importWire();
    factory.print();

    cout << "\n5. Clone the factory, make a mask and then destroy the cloned factory." << endl;
    {
        Factory clonedFactory = factory;
        clonedFactory.print();
        clonedFactory.produceMask();
        clonedFactory.print();
    } // "clonedFactory" is destructed once the program runs out of this scope.

    cout << "\n6. Make a mask and then deliver all the masks." << endl;
    cout << "(State of the original factory)" << endl;
    factory.print();
    factory.produceMask();
    factory.print();
    factory.deliverMasks();

    cout << "\n7. Destroy the original factory." << endl;
    cout << "(State of the factory just before destruction)" << endl;
    factory.print();


    return 0;
} // "factory" is destructed once the program runs out of this scope.
