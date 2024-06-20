#include "Password.h"

Password::Password(){
    cout << "введите пароль" << endl;
    getline(cin, pass);
}
void Password::defensPass()
{
    for (int i = 0; i < size(pass); i++)
    {
        if (isdigit(pass[i]))
            num++;
        if (isupper(pass[i]) || islower(pass[i]))
            lat++;
        if (ispunct(pass[i]))
            chart++;
    }
    if(num > 0 && lat == 0 && chart == 0)
        cout << "слабый пароль" << endl;
    else if (num > 6 && (lat >=1 || chart >=1))
        cout << "средний пароль" << endl;
    else if (num > 8 && lat >=3 && chart >= 1)
        cout << "хороший пароль" << endl;
}
bool Password::operator==(const Password& p)
{
    if (pass == p.pass)
    {
        cout << "равны" << endl;
        return true;
    }
    return false;
}
bool Password::operator!=(const Password& p)
{
    if (pass != p.pass)
    {
        cout << "Не равны" << endl;
        return true;
    }
    return false;
}

