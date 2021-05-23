#pragma once
#include<iostream>
#include<list>
#include"Lesson.h";

using namespace std;

class Exam {
public:
	list <Lesson> lesson;
	double point;
	Exam() :lesson(), point() {};
	Exam(const double point)
	{
		this->point = point;
	}
	void ShowExam() {
		cout << "Exam Point->" << point << endl;
		for (auto i:lesson)
		{
			i.ShowLesson();
		}
	}
};