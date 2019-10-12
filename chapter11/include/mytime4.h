#ifndef MYTIME4_H
#define MYTIME4_H

#include <iostream>

using namespace std;

class Time4
{
    public:
        Time4();
        Time4(int h,int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0,int m = 0);
        friend Time4 operator+(const Time4 & t1 ,const Time4 & t2 ) ;
        friend Time4 operator-(const Time4 & t1 ,const Time4 & t2 ) ;
        friend Time4 operator*(const Time4 & t,double n) ;
        friend Time4 operator*(double m,const Time4 & t)
        {
            return t * m;
        }
        friend std::ostream & operator<<(std::ostream & os,const Time4 & t);
        void show() const;

    protected:

    private:
        int hours;
        int minutes;
};

#endif // MYTIME4_H
