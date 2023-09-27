#include<iostream>
#include <vector>
#include "Class.h"

#include"PersonPrime.h"

#include<fstream>

using namespace std; 

class Person
{

private:
	//ENCAPSULATION!

	//IN the C language, `struct` is a keyword
	//In Python, Java - class is a keyword
	string name = "asdf123"; //note the semicolon (not a comma)
	bool isSenior = false;
	int height = 32; //inches?

	
public: 
	int getHeight()  // "inline" (potential speed benefits)
	{
		//height = 23; 

		return height; 
	}
	/// <summary>
	/// This function gets the name!
	/// </summary>
	/// <returns>a string - the name!</returns>
	string getName() const	//"getter" function AKA: an accessor function  
	{
		return name; 
	}

	//setters 
	void setName(string suppliedName)
	{
		name = suppliedName; 
		//this->name = name; 
	}

	//CONSTRUCTOR FUNCTIONS!  
	Person() //default constructor - one which takes no args
	{
		cout << "Default constructor called!" << endl; 
		name = "TBD";
		isSenior = false; 
		height = -999; 
	}

	//a constructor that takes params
	Person(string suppliedName, bool suppliedIsSenior, int suppliedHeight)
	{
		name = suppliedName; 
		isSenior = suppliedIsSenior; 
		height = suppliedHeight; //Logic ERROR!
	}

};


//extern int someInt; 
//
////void printStaticAndAutomaticVars()
////{
////	static int staticFunctionCallCount = 0;
////	int nonStaticVar = 0;
////	staticFunctionCallCount++;
////	nonStaticVar--;
////	cout << "static var value: " << staticFunctionCallCount
////		<< "\tnonstatic (automatic) var value: " << nonStaticVar << endl;
////}

//class SomeClass
//{
//public:
//	static int x;
//	int y;
//};
//
//
//int SomeClass::x; 


enum class Month
{
	Jan, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec
};

struct Date
{
	int d, y;
	Month m;

	Date(int d, Month m, int y)
		:d(d), m(m), y(y)
	{

	}
};

//void printDate(const Date& dObj)
//{
//	cout << "day: " << dObj.d << endl; 
//	cout << "month: " << dObj.m << endl;
//	cout << "year: " << dObj.y << endl;
//}

struct Point
{
	int x, y; 

	Point(int x, int y)
		:x(x), y(y)
	{

	}
};

int main()
{
	//string greeting("hello");
	ifstream inputFile{ "someData.txt"}; //ERROR!

	if (!inputFile)
	{
		cout << "File not found!" << endl; 
	}

	int someX, someY; 
	//cin >> 
	vector<Point> pointsList; 

	while (!inputFile.eof())
	{
		inputFile >> someX >> someY; 
		Point p{ someX, someY };
		pointsList.push_back(p); 
	}

	for (auto& point : pointsList)
	{
		cout << point.x << "\t" << point.y << endl; 
	}
	//cout << x << "\t" << y << endl; 
	
	//Jan 
	//Date today(20, Month::Sept, 2023);
	//cout << today << endl; 
	//printDate(today); 
	////SomeClass sc1;
	////sc1.x = 1;
	////sc1.y = 2;
	////SomeClass sc2;
	////sc2.x = 3;
	////sc2.y = 4;
	////cout << sc1.x << ", " << sc1.y << endl;
	////cout << sc2.x << ", " << sc2.y << endl;
	////cout << "\n\n" << someInt << "\n\n"<<endl;

	////Person p{ "Seth", false, 24 };
	////cout << sizeof(p) << endl; 
	//////const int DOZEN = 12
	//////cout << p.height << "\t" << std::boolalpha << p.isSenior<< "\t" << p.name <<  endl;
	//////string name = p.getName();

	//////p.setName("Jacobian"); 

	//////cout << "UPDATED name: " << p.getName() << endl;
	////
	//////:: is called the "scope resolution operator" 
	//////std::cout << "somethdsfin" << std::endl; //PREPEND (append) 

	////std::cout << 
	////Class thisClass;
	//////cout << thisClass.
	//////cout << thisClass. << endl; 


	////Class otherClass; 

	////otherClass.setNumberOfStudents(55); 
	//////if(this)
	////cout << std::boolalpha << thisClass.isSameClass(otherClass) << endl; 


	//int a = 123;

	////PersonPrime you{ "Cayne Clark", 24, "I dunno job?" };
	//PersonPrime you; 
	////you.ge
	//cout << "Before setting age: " << you.getAge() << endl; 
	//you.setAge(12345);
	//cout << "After setting age: " << you.getAge() << endl;
	////cout << "" << endl; 
	//cout << you.getOccupation() << endl; //-8765432
	////cout << you.name << endl; 
	////cout << you.occupation << endl;
	////PersonPrime me; 
	////cout << me.getOccupation() << endl;

	////me.setAge(123);

	////cout << me.age << endl; 



	return 0; 
}