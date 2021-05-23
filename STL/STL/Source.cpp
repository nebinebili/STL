#include<iostream>
#include "Universty.h";
#include"Exam.h";
#include"BankCard.h";
#include"Grooup.h";
#include"Bank.h";

using namespace std;


void Control() {
	Group group1("Group1");

	//Creat Lesson ///////////////////////////////////////////////////////

	Lesson lesson1("Pyhics");
	Lesson lesson2("English");

	Exam exam1(500);
	exam1.lesson.push_back(lesson1);
	exam1.lesson.push_back(lesson2);

	// Creat Teacher /////////////////////////////////////////////////////////

	BankCard T1bankcard1("123-123-132-452", "4821", 2000, "05/22");
	Teacher teacher1("Ali", "Aliyev", 28, "Muhendislik", 1100);
	teacher1.bankCard.push_back(T1bankcard1);
	teacher1.groups.push_back(group1);

	//Creat Student ////////////////////////////////////////////////////////

	BankCard S1bankcard1("123-655-444-321", "4365547", 123, "12/21");
	Student s1("Nebi", "Nebili", "3 course student", 70, 100);
	s1.bankCard.push_back(S1bankcard1);
	s1.exams.push_back(exam1);

	BankCard S2bankcard1("4945-21321-123", "20020", 300, "09/21");
	Student s2("Kenan", "Idayetov", "2 course student",30, 220);
	s2.bankCard.push_back(S2bankcard1);
	s2.exams.push_back(exam1);

	//Creat Group ////////////////////////////////////////////////////////////

	group1.students.push_back(s1);
	group1.students.push_back(s2);
	group1.lessons.push_back(lesson1);
	group1.lessons.push_back(lesson2);

	//Creat University ///////////////////////////////////////////////////////////////
	
	Universty u1("BMU");
	u1.students.push_back(s1);
	u1.students.push_back(s2);
	u1.teachers.push_back(teacher1);

	//Creat Bank ////////////////////////////////////////////////////////////////

	Bank bank;
	bank.bankCards.push_back(S1bankcard1);
	bank.bankCards.push_back(S2bankcard1);
	bank.bankCards.push_back(T1bankcard1);
	

	/////////////////////////////////////////////////////////////////////

	/// Metodlar: 

	//u1.ShowAllStudents();
	//u1.showUniverstiy();
	//cout<<u1.getUniversityscore();
	//cout<<u1.getPayment();
	//bank.ShowBalance(S1bankcard1);
}

int main() {

	Control();
}