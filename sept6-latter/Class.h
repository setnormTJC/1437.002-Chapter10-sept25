#pragma once
#include <string>
#include<iostream>
using namespace std; 


class Class
{
private: 
	//specification file
	int numberOfStudents = -999; 
	string courseName = "COSC-1437"; 
	bool lightsOn = false; 

public: 
	Class(); //function declaration!
	/// <summary>
	/// sadfadsf
	/// </summary>
	/// <returns>an integer (which is the number of students)</returns>
	int getNumberOfStudents(); //

	bool isSameClass(Class otherClass);

	void setNumberOfStudents(int newNumberOfStudents);
};

