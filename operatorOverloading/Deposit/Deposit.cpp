#include "Deposit.h"

ostream& operator << (ostream& os, const Deposit& d)
{
    return os << d.money << endl;
}
Deposit Deposit::operator+(const float& d)
{
    this->money += d;
    return *this;
}
Deposit Deposit::operator-(const float& d)
{
    money -= d;
    return *this;
}
void Deposit::skolko_zarabotayu()
{
    float k;
    k = money * pow((1 + ((interesRate / 100) / 12)), month);
    cout << k << endl;
}