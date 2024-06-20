#pragma once
#include<iostream>
#include<ostream>
#include<istream>
using namespace std;

class RGB
{
public:
    RGB() : R(0), G(0), B(0) {};
    RGB(int R, int G, int B) : R(R), G(G), B(B) {};
    bool correctRGB();
    void setRGB(int R, int G, int B);
    bool operator ==(const RGB& p);
    bool operator != (const RGB& p);
    friend ostream& operator <<(ostream& os, const RGB& rgb);
    friend istream& operator >> (istream& in, RGB& rgb);

private:
    unsigned int R = 0;
    unsigned int G = 0;
    unsigned int B = 0;
};


