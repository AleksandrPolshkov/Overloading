#pragma once

#include<iostream>
#include<iomanip>
#include<ostream>
#include<istream>
using namespace std;

class Time
{
public:
    Time();
    Time(int hours);
    Time(int hours,int min);
    Time(int hours, int min, int sec);
    Time(Time& time);

    void getTime();
    void setTime();
    void setInTime(int hours, int min, int sec);
    void AmPm();

    bool operator > (const Time& t);
    bool operator < (const Time& t);
    bool operator != (const Time& t);
    bool operator == (const Time& t);
    Time operator + (const Time& t);
    Time operator += (const Time& t);
    Time operator - (const Time& t);
    Time operator -= (const Time& t);

    friend ostream& operator << (ostream& os, const Time& t);
    friend istream& operator >> (istream& in, const Time& t);

private:
    int hours;
    int min;
    int sec;
};


