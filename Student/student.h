/*
*main.cpp
*Version Information
*Author: Conal McCord
*Description: Student project header
*Date: 25/09/2018
*/
#pragma once

#include <iostream>
#include <string>

//creates class
class student {
private:
	std::string Name_;
	std::string RegID_;
	std::string Course_;
	int YearOfStudy_;
	int MarkOne_;
	int MarkTwo_;
	int MarkThree_;
//initialises setters and getters
public:
	student();

	student(std::string name, std::string regID, std::string course, int yearofstudy, int markone, int marktwo, int markthree);

	void SetName(std::string Name_);
	std::string GetName() const;

	void SetID(std::string RegID_);
	std::string GetID() const;

	void SetCourse(std::string Course_);
	std::string GetCourse() const;

	void SetYOS(int YearOfStudy_);
	int GetYOS() const;

	void SetMarkOne(int MarkOne_);
	int GetMarkOne() const;

	void SetMarkTwo(int MarkTwo_);
	int GetMarkTwo() const;

	void SetMarkThree(int MarkThree_);
	int GetMarkThree() const;
//initialises ToString and CalculatorClassification
	void ToString() const;

	std::string CalculatorClassification(int mark);

};
