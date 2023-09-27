#include "Class.h"

Class::Class()
{
	//cout << "Default constructor called!" << endl; 
	numberOfStudents = 123; 
	courseName = "NOTCOSC1437"; 
	lightsOn = true;
}

int Class::getNumberOfStudents()
{
	return numberOfStudents;
}

//insert setter for number of students:


bool Class::isSameClass(Class otherClass)
{
	if (numberOfStudents == otherClass.numberOfStudents
		&&
		courseName == otherClass.courseName
		&&
		lightsOn == otherClass.lightsOn
		)
	{
		return true;
	}

	else
	{
		return false;
	}
}

void Class::setNumberOfStudents(int newNumberOfStudents)
{
	//while (newNumberOfStudents > 22)
	//{
	//	cout << "That room only seats 22!" << endl;
	//	cin >> numberOfStudents;
	//}

	numberOfStudents = newNumberOfStudents;
}
