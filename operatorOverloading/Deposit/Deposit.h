#pragma once
#include<iostream>
#include<ostream>
#include<cmath>
using namespace std;
class Deposit
{
public:
    Deposit() : money(0), month(0), interesRate(0) {};
    Deposit(float money) : money(money) {};
    Deposit(float money, int month) : money(money), month(month) {};
    Deposit operator +(const float& d);
    Deposit operator -(const float& d);
    void skolko_zarabotayu();
    friend ostream& operator << (ostream& os, const Deposit& d);
private:
    float interesRate = 10;
    int month = 0;
    float money = 0;
};

