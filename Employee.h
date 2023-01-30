#pragma once
#include "Address.h"
#include <string>
using namespace std; 

class Employee
{
private:
	string name; 
	string id;
	Address employeeAddress; 

public:
	void setName(string n);
	string getName();

	void setID(string i);

	string getID();

	void setAddress(Address a);

	Address getAddress();

	Employee();
	Employee(string n, string i, Address a);


};

