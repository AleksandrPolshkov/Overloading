#pragma once
#include<iostream>
#include<ostream>
#include<istream>
using namespace std;
class Point
{
public:
    Point() : x(0), y(0) {};
    Point(int x, int y) : x(x), y(y) {};
    int GetX(){return x;}
    int GetY(){return y;}
    void SetX(int x){this->x = x;}
    void SetY(int y){this->y = y;}
    void pointCoord();
    void lineCoord();
    bool operator == (Point& p);
    bool operator !=(Point& p);
    friend ostream& operator << (ostream& os,const Point& p);
    friend istream& operator >> (istream& in, Point& p);
private:
    int x;
    int y;
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
};