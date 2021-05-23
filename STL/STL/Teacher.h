#pragma once
#include<iostream>
#include"Person.h";
#include"Grooup.h";

using namespace std;

class Teacher:public Person{
public:
	static int id;
	int teacherId;
	int age;
	string department;
	double salary;
	list<Group>groups;
	Teacher() :teacherId(),age(), department(), salary(),groups(){};
	Teacher(const string&name,const string&surname,const int age,const string&department,const double salary)
	 :Person(name,surname)
	{
		teacherId = ++id;
		this->age = age;
		this->department = department;
		this->salary = salary;
	}
	void ShowTeacher() {
		cout << "------------ Teacher INFO -------------" << endl;
		cout << "Id->" << teacherId << endl;
		Person::Show();
		cout << "Age->" << age << endl;
		cout << "Department->" << department << endl;
		cout << "Salary->" << salary << endl;
		for (auto i:groups )
		{
			i.ShowGroup();
		}
	}
};
int Teacher::id = 0;
