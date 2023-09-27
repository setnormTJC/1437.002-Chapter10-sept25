#include "PersonPrime.h"

void PersonPrime::setName(string newName)
{
	name = newName;
}

void PersonPrime::setAge(int newAge)
{
	age = newAge;
}

string PersonPrime::getOccupation()
{
	return occupation; 
}

PersonPrime::PersonPrime()
{
	//cout << "Default constructor of `PersonPrime` called" << endl; 

	name = "Name TBD";
	age = -999;
	occupation = "Job TBD";
}

PersonPrime::PersonPrime(string newName, int newAge, string newJob)
{
	name = newName; 
	age = newAge; 
	occupation = newJob;
}

//int PersonPrime::getAge()
//{
//	//if (age > 110){cout << "Age is too old for a human " }
//	return age; 
//}