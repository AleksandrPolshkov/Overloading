#include "TIMER.h"

ostream& operator <<(ostream& os,const Timer& t)
{
    cout << endl;
    cout << "COUTðåçóëüòàòû: " << endl;
    if (t.result_safe)
        for (int i = 0; i < t.SIZE-1; i++)
            os << t.result_safe[i] << endl;
    if (t.result_safe2)
        for (int i = 0; i < t.SIZE-1; i++)
            os << t.result_safe2[i] << endl;
    return os;
}

void Timer::timerStartStop()
{
    int a;
    int a2;
    cout << "Нажмите 1 что запустить" << endl;
    cin >> a;
    if (a)
    {
        time(&start);
        cout << "Нажмите 0 что остановить" << endl;
        cin >> a2;
        if (!a2)
            time(&end);
        result = difftime(end, start);
    }
    cout << " Время = " << result << " секунд" << endl;
}

void Timer::safe_time()
{
    if (!result_safe)
    {
        double* result_safe = new double[SIZE];
        for (int i = 0; i < SIZE-1; i++)
            result_safe[i] = result_safe2[i];
        result_safe[SIZE - 1] = result;
        delete [] result_safe2;
        result_safe2 = result_safe;
    }
    if (!result_safe2)
    {
        double* result_safe2 = new double[SIZE];
        for (int i = 0; i < SIZE - 1; i++)
            result_safe2[i] = result_safe[i];
        result_safe2[SIZE - 1] = result;
        delete[] result_safe;
        result_safe = result_safe2;
    }
    SIZE++;
}

void Timer::reset()
{
    delete[] result_safe;
    result_safe = NULL;
    delete[] result_safe2;
    result_safe2 = NULL;
    SIZE = 1;
    double* result_safe = 0;
    double* result_safe2 = 0;
}