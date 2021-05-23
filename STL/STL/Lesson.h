#pragma once
#include<iostream>

using namespace std;

class Lesson {
	string name;
public:
	Lesson() :name() {};
	Lesson(const string&name)
	{
		this->name = name;
	}
	void ShowLesson() {
		cout << "Lesson Name->" << name << endl;
	}
};