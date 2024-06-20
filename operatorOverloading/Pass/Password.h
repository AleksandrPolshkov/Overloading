#pragma once
#include<iostream>
#include<istream>
#include<ostream>
#include<string>
using namespace std;

class Password
{
public:
    Password();
    void defensPass();
    bool operator ==(const Password& p);
    bool operator !=(const Password& p);

private:
    int num = 0;
    int lat = 0;
    int chart = 0;
    string pass;
};

