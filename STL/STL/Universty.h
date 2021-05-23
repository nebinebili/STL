#pragma once
#include<list>
#include<iostream>
#include"Teacher.h";
#include"Student.h";

class Universty {
public:
	string name;
	list <Teacher> teachers;
	list <Student> students;
	Universty() :name(), teachers(), students() {};
	Universty(const string&name)
	{
		this->name = name;
	}

	void showUniverstiy() {
		cout << "University Name->" << name << endl;
		for (auto i : students)
		{
			 i.ShowStudent();
		}
		for (auto i : teachers)
		{
			i.ShowTeacher();
		}
	}

	void ShowAllStudents() {
		for (auto i : students)
		{
			i.ShowStudent();
		}
	}

	double getUniversityscore() {
		double temp=0;
		for (auto i:students)
		{
			temp+=i.score;

		}
		return ((students.size() * 100) / temp) * 100;
	}

	double getPayment() {
		double temp = 0;
		for (auto i:students)
		{
			temp += i.money;
		}
		for (auto i : teachers)
		{
			temp += i.salary;
		}
		return temp;
	}
};