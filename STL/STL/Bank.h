#pragma once
#include<iostream>
#include<list>;
#include"BankCard.h";

using namespace std;

class Bank {
public:
	list<BankCard>bankCards;
	Bank() :bankCards() {};
	void ShowBank() {
		for (auto i:bankCards)
		{
			i.ShowBankCard();
		}
	}

	void ShowBalance(BankCard bankCard) {
		for (auto i : bankCards)
		{
			if (i.password == bankCard.password) {
				cout <<"Balance->"<<i.balance;
				return;
			}
		}
		cout << "Card not found" << endl;
	}
};