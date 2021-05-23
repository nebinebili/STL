#pragma once
#include<iostream>
#include"Person.h";
#include"Exam.h";

using namespace std;

class Student:public Person {
public:
	static int id;
	int studentID;
	string speciality;
	double score;
	double money;
	list<Exam>exams;
	Student():studentID(),speciality(), score(), money(),exams(){};
	Student(const string&name,const string&surname,const string& speciality,const double score,const double money)
	 :Person(name,surname)
	{
		studentID = ++id;
		this->money = money;
		this->speciality = speciality;
		this->score = score;
	}
	void ShowStudent() {
		cout << "------------- Student INFO --------------" << endl;
		cout << "Id->" << studentID << endl;
		Person::Show();
		cout << "Speciality->" << speciality << endl;
		cout << "Score->" << score << endl;
		cout << "Money->" << money << endl;
		for (auto i :exams )
		{
			i.ShowExam();
		}
	}
	
};

int Student::id = 0;