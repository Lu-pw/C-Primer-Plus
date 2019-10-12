#ifndef MYTIME1_H
#define MYTIME1_H
#include <iostream>

using namespace std;
class Time
{
    public:
        Time();
        Time(int h,int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0,int m = 0);
        Time operator+(const Time & t) const;
        void show() const;

    protected:

    private:
        int hours;
        int minutes;
};

#endif // MYTIME1_H
