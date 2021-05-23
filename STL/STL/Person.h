#pragma once
#include<list>;
#include<iostream>
#include "BankCard.h";

using namespace std;

class Person {
public:
	string name;
	string surname;
	list<BankCard> bankCard;
	Person() :name(), surname(), bankCard() {};
	
	Person(const string&name,const string&surname)
	{
		this->name = name;
		this->surname = surname;
	}
	void Show() {
		cout << "Name->" << name << endl;
		cout << "Surname->" << surname << endl;
		for (auto i:bankCard)
		{
			i.ShowBankCard();
		}
	}
};
