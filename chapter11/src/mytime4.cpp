/*作者：lu
  日期：
  版权：
*/ #include "mytime4.h"


Time4::Time4()
{
    //ctor
    hours = minutes = 0;
}

Time4::Time4(int h,int m)
{
    hours = h;
    minutes = m;
}
void Time4::AddMin(int m)
{
    minutes += m;
    hours += minutes/60;
    minutes %= 60;
}
void Time4::AddHr(int h)
{
    hours += h;
}
void Time4::Reset(int h,int m)
{
    hours = h;
    minutes = m;
}
Time4 operator+(const Time4 & t1 ,const Time4 & t2 )
{
    Time4 sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;

}
Time4 operator-(const Time4 & t1 ,const Time4 & t2 )
{
    Time4 diff;
    if(t1.minutes >= t2.minutes)
    {
        diff.minutes = t1.minutes - t2.minutes;
        diff.hours = t1.hours - t2.hours;
    }
    else
    {
        diff.minutes = t1.minutes +60 - t2.minutes;
        diff.hours = t1.hours - t2.hours -1;
    }
    if(diff.hours < 0)
    {
        diff.hours = diff.hours + 24;
    }
    return diff;
}
Time4 operator*(const Time4 & t,double n)
{
    Time4 mul;
    long totalminutes = t.hours * n + t.minutes * n;
    mul.hours = totalminutes / 60;
    mul.minutes = totalminutes % 60;
    return mul;
}

std::ostream & operator<<(std::ostream & os,const Time4 & t)
{
    os <<t.hours <<": "<<t.minutes <<endl;
    return os;
}
void Time4::show() const
{
    cout << hours << ": "<< minutes <<endl;
}
