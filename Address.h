#pragma once
#include <string>
using namespace std; 
class Address
{
private: 
	string streetName;
	string houseNo;
	string zipCode;
	string city;
public:
	void setStreetName(string sn);
	string getStreetName();

	void setHouseNo(string hn);
	string getHouseNo();

	void setZipCode(string zc);
	string getZipCode();

	void setCity(string c);
	string getCity();

	Address();
	Address(string sn, string hn, string zc, string c);

};

