/*
*main.cpp
*Version Information
*Author: Conal McCord
*Description: Student class file for the student project
*Date: 25/09/2018
*/

#include "student.h"
//default constructor
student::student() {
}
//non default constructor
student::student(std::string name, std::string regID, std::string course, int yearofstudy, int markone, int marktwo, int markthree)
	: Name_{ name }, RegID_{ regID }, Course_{ course }, YearOfStudy_{ yearofstudy }, MarkOne_{ markone }, MarkTwo_{ marktwo }, MarkThree_{ markthree } {

}
void student::SetName(std::string name) {
	Name_ = name;
}

std::string student::GetName() const {
	return Name_;
}
void student::SetID(std::string regID) {
	RegID_ = regID;
}

std::string student::GetID() const {
	return RegID_;
}
void student::SetCourse(std::string course) {
	Course_ = course;
}

std::string student::GetCourse() const {
	return Course_;
}
//method to input year of study between 1 and 5
void student::SetYOS(int yearofstudy) {
	bool condition = false;
	while (condition == false) {
		if (yearofstudy >= 1 && yearofstudy <= 5) {
			YearOfStudy_ = yearofstudy;
			condition = true;
		}
		else {
			std::cout << "Enter a year of study between 1 and 5: " << std::endl;
			std::cin >> yearofstudy;
		}
	}
}

int student::GetYOS() const {
	return YearOfStudy_;
}
//method to input year 1 mark between 0 and 100
void student::SetMarkOne(int markone) {
	bool condition = false;
	while (condition == false) {
		if (markone >= 0 && markone <= 100) {
			MarkOne_ = markone;
			condition = true;
		}
		else {
			std::cout << "Enter a mark between 1 and 100: " << std::endl;
		    std::cin >> markone;
		}
	}
	
}

int student::GetMarkOne() const {
	return MarkOne_;
}
//method to input year 2 mark between 0 and 100
void student::SetMarkTwo(int marktwo) {
	bool condition = false;
	while (condition == false) {
		if (marktwo >= 0 && marktwo <= 100) {
			MarkTwo_ = marktwo;
			condition = true;
		}
		else {
			std::cout << "Enter a mark between 1 and 100: " << std::endl;
			std::cin >> marktwo;
		}
	}
}

int student::GetMarkTwo() const {
	return MarkTwo_;
}
//method to input year 3 mark between 0 and 100
void student::SetMarkThree(int markthree) {
	bool condition = false;
	while (condition == false) {
		if (markthree >= 0 && markthree <= 100) {
			MarkThree_ = markthree;
			condition = true;
		}
		else {
			std::cout << "Enter a mark between 1 and 100: " << std::endl;
			std::cin >> markthree;
		}
	}
}

int student::GetMarkThree() const {
	return MarkThree_;
}
//displays student as a string
void student::ToString() const {
	std::cout << Name_ << " " << RegID_ << " " << Course_ << " " << YearOfStudy_ << " " << MarkOne_ << " " << MarkTwo_ << " " << MarkThree_ << std::endl;
}

void student::CalculatorClassification() const
{
}
