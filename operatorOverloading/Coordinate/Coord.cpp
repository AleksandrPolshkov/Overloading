#include "Coord.h"

void Point::pointCoord()
{
    if (x > 0 && y > 0)
        cout << "1 четверть" << endl;
    if (x < 0 && y > 0)
        cout << "2 четверть" << endl;
    if (x < 0 && y < 0)
        cout << "3 четверть" << endl;
    if (x > 0 && y < 0)
        cout << "4 четверть" << endl;
}
void Point::lineCoord()
{
    if (((x - x1) * (y2 - y1) - (x2 - x1) * (y - y1)) == 0)
        cout << "точка лежит на линии" << endl;
    else if (((x - x1) * (y2 - y1) - (x2 - x1) * (y - y1)) > 0)
        cout << "точка лежит выше линии" << endl;
    else if (((x - x1) * (y2 - y1) - (x2 - x1) * (y - y1)) < 0)
        cout << "точка лежит ниже линии" << endl;
}
bool Point::operator==(Point& p)
{
    if (x == p.x && y == p.y){
        return true;
    }
    return false;
}
bool Point::operator!=(Point& p)
{
    if (x != p.x && y != p.y)
        return true;
    return false;
}
ostream& operator << (ostream& os, const Point& p)
{
    return os << "x = " << p.x << " " << "y = "<<  p.y << endl;
}
istream& operator>>(istream& in, Point& p)
{
    int x;
    int y;
    in >> x >> y;
    p.SetX(x);
    p.SetY(y);
    return in;
}