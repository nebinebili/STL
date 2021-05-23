#pragma once
#include<iostream>

using namespace std;

class BankCard {
public:
	string long_code;
	string password;
	double balance;
	string expired_month_year;
	BankCard() :long_code(), password(), balance(), expired_month_year() {};
	BankCard(const string& long_code,const string& password,const double balance,const string& expired_month_year)
	{
		this->balance = balance;
		this->expired_month_year = expired_month_year;
		this->long_code = long_code;
		this->password = password;
	}
	void ShowBankCard() {
		cout << "\n(Bank Card)Long Code->" << long_code << endl;
		cout << "(Bank Card)Password->" << password << endl;
		cout << "(Bank Card)Balance->" << balance << endl;
		cout << "(Bank Card)Expired month/year->" << expired_month_year << endl << endl;
	}
};