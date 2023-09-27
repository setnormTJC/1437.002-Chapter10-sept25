#pragma once

#include<iostream>

using namespace std;

class PersonPrime
{
private:
	string name = "TBD";
	int age; 
	string occupation;

public: 
	void setName(string);
	void setAge(int);

	int getAge()
	{
		//if (age > 110){cout << "Age is too old for a human " }
		return age;
	}
	string getOccupation();

	PersonPrime();
	PersonPrime(string, int, string); 
};

