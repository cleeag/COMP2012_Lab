#include <iostream>
#include <cstring>

#include "organization.h"

using namespace std;

Organization::Organization(const char* name)
{
	// 1. Allocate dynamic memory for private member "name"
	// Hint: strlen() function is useful here
	// 2. Copy the name using strcpy
	this->name = new char [strlen(name)];
    strcpy(this->name, name);
}

Organization::~Organization()
{
	cout << "Organization Dtor: "<< name << endl;
	
	// Free dynamically allocated memory
	delete [] name;
}

void Organization::print_description() const
{
	cout << "Organization: " << name;
}
