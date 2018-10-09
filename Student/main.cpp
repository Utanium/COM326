/*
*main.cpp
*Version Information
*Author: Conal McCord
*Description: Main .cpp file for the student project
*Date: 25/09/2018
*/

#include <iostream>
#include <string>
#include "student.h"

using namespace std; 

int main() {
	//example of how the finished input will look
	student Conal{ "Conal", "B00741929", "Computer Science", 2, 67, 76, 81 };
	Conal.ToString();
	Conal.CalculatorClassification();

	student Eamon;
	//sets the name to eamon
	Eamon.SetName("Eamon");

	//sets student ID
	Eamon.SetID("B00731929");

	//sets the course title
	Eamon.SetCourse("Computer Science");

	//pulls method for inputting year of study and applies it to the ToString 
	int yearofstudy{};
	cout << "Enter a year of study between 1 and 5: ";
	cin >> yearofstudy;
	Eamon.SetYOS(yearofstudy);

	//pulls method for inputting year 1 marks and applies it to the ToString
	int markone{};
	cout << "Enter a mark between 1 and 100: ";
	cin >> markone;
	Eamon.SetMarkOne(markone);

	//pulls method for inputting year 2 marks and applies it to the ToString
	int marktwo{};
	cout << "Enter a mark between 1 and 100: ";
	cin >> marktwo;
	Eamon.SetMarkTwo(marktwo);

	//pulls method for inputting year 3 marks and applies it to the ToString
	int markthree{};
	cout << "Enter a mark between 1 and 100: ";
	cin >> markthree;
	Eamon.SetMarkThree(markthree);

	//displays information as a string
	Eamon.ToString();
	Eamon.CalculatorClassification();

	return 0;

}