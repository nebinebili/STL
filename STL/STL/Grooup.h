#pragma once
#include<iostream>
#include"Student.h";
#include"Lesson.h";

class Group {
	string name;
public:
	list<Student> students;
	list<Lesson> lessons;
	Group() :name(), students(), lessons() {};
	Group(const string&name)
	{
		this->name = name;
	}
	void ShowGroup() {
		cout << "Group name->" << name << endl;
		for (auto i :students )
		{
			i.ShowStudent();
		}
		for (auto i : lessons)
		{
			i.ShowLesson();
		}
	}
};