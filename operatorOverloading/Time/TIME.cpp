#include "TIME.h"
Time::Time() {
    this->hours = 12;
    this->min = 00;
    this->sec = 00;
}
Time::Time(int hours){
    if (hours <= 23){
        this->hours = hours;
        this->min = 00;
        this->sec = 00;
    }else{
        cout << "The data was entered incorrectly" << endl;
        this->hours = 00;
        this->min = 00;
        this->sec = 00;
    }
};
Time::Time(int hours,int min)
{
    if (hours <= 23 && min <= 59)
    {
        this->hours = hours;
        this->min = min;
        this->sec = 00;
    }
    else
    {
        cout << "The data was entered incorrectly" << endl;
        this->hours = 00;
        this->min = 00;
        this->sec = 00;
    }
};
Time::Time(int hours, int min, int sec)
{
    if (hours <= 23 && min <= 59 && sec <= 59)
    {
        this->hours = hours;
        this->min = min;
        this->sec = sec;
    }
    else
    {
        cout << "The data was entered incorrectly" << endl;
        this->hours = 00;
        this->min = 00;
        this->sec = 00;
    }
};
Time::Time(Time& time)
{
    hours = time.hours;
    min = time.min;
    sec = time.sec;
}
void Time::getTime(){
    cout << setfill('0') << setw(2) << hours << ":";
    cout << setfill('0') << setw(2) << min << ":" ;
    cout << setfill('0') << setw(2) << sec << ";";
}
void Time::setTime()
{
    for (int i = 0; i < 1;)
    {
        cin >> hours;
        cin >> min;
        cin >> sec;

        if (hours <= 23 && min <= 59 && sec <= 59)
            i++;
        else
            cout << "The data was entered incorrectly" << endl;
    }
}
void Time::setInTime(int hours, int min, int sec)
{
    for (int i = 0; i < 1;)
    {
        if (hours <= 23 && min <= 59 && sec <= 59)
        {
            this->hours = hours;
            this->min = min;
            this->sec = sec;
            i++;
        }
        else
        {
            cout << "The data was entered incorrectly" << endl;
            i++;
        }
    }
}
void Time::AmPm()
{
    if (hours > 12)
        hours -= 12;
}
bool Time::operator > (const Time& t)
{
    if (hours > t.hours)
        return true;
    else if (min > t.min)
        return true;
    else if (sec > t.min)
        return true;
    return false;
}
bool Time::operator < (const Time& t)
{
    if (hours < t.hours)
        return true;
    else if (min < t.min)
        return true;
    else if (sec < t.min)
        return true;
    return false;
}
bool Time::operator != (const Time& t)
{
    if (hours != t.hours && min != t.min && sec != t.sec)
    {
        return true;
    }
    return false;

}
bool Time::operator == (const Time& t)
{
    if (hours == t.hours && min == t.min && sec == t.sec)
    {
        return true;
    }
    return false;

}
Time Time::operator+(const Time& t)
{
    hours += t.hours;
    min += t.min;
    sec += t.sec;
    return hours,min,sec;
}
Time Time::operator+=(const Time& t)
{
    hours += t.hours;
    min += t.min;
    sec += t.sec;
    return hours, min, sec;
}
Time Time::operator-(const Time& t)
{
    hours -= t.hours;
    min -= t.min;
    sec -= t.sec;
    return hours, min, sec;
}
Time Time::operator-=(const Time& t)
{
    hours -= t.hours;
    min -= t.min;
    sec -= t.sec;
    return hours, min, sec;
}
ostream& operator << (ostream& os, const Time& t)
{
    return os << setfill('0') << setw(2) << t.hours << ":" << setfill('0') << setw(2)  << t.min << ":" << setfill('0') << setw(2) << t.sec << ";" << endl;
}
istream& operator >> (istream& in,Time& t)
{
    unsigned int hours;
    unsigned int min;
    unsigned int sec;
    in >> hours >> min >> sec;
    if (in)
        t.setInTime(hours, min, sec);
    return in;
}
