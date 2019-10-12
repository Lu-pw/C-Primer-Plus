#ifndef MYTIME3_H
#define MYTIME3_H
#include <iostream>

using namespace std;

class Time3
{
    public:
        Time3();
        Time3(int h,int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0,int m = 0);
        Time3 operator+(const Time3 & t) const;
        Time3 operator-(const Time3 & t) const;
        Time3 operator*(double n) const;
        friend Time3 operator*(double m,const Time3 & t)
        {
            return t * m;
        }
        friend std::ostream & operator<<(std::ostream & os,const Time3 & t);
        void show() const;

    protected:

    private:
        int hours;
        int minutes;
};

#endif // MYTIME3_H
