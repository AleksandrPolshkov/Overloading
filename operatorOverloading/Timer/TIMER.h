#pragma once
#include<iostream>
#include<ctime>
#include<ostream>
using namespace std;

class Timer
{
public:
    void timerStartStop();
    void safe_time();
    void reset();
    friend ostream& operator <<(ostream& os, const Timer& t);
private:
    time_t start = 0, end = 0;
    float t = 0;
    double result = 0;
    double *result_safe = 0;
    double *result_safe2 = 0;
    int SIZE = 1;
};
