// EmployeeAddressExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
int main()
{
	Employee jamesObject;

	/*cout << jamesObject.getName() << endl;
	cout << jamesObject.getAddress().getStreetName() << endl;*/

	Address e2address("Warren ave.", "2324", "48202", "Detroit");

	Employee e2("James", "123456", e2address);

	Employee employee3("Sarah", "5344", e2address);

	cout << employee3.getName() << endl;
	cout << employee3.getAddress().getStreetName() << endl;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
