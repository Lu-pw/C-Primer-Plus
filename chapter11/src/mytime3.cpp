/*作者：lu
  日期：
  版权：
*/ #include "mytime3.h"


Time3::Time3()
{
    //ctor
    hours = minutes = 0;
}

Time3::Time3(int h,int m)
{
    hours = h;
    minutes = m;
}
void Time3::AddMin(int m)
{
    minutes += m;
    hours += minutes/60;
    minutes %= 60;
}
void Time3::AddHr(int h)
{
    hours += h;
}
void Time3::Reset(int h,int m)
{
    hours = h;
    minutes = m;
}
Time3 Time3::operator+(const Time3 & t) const
{
    Time3 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;

}
Time3 Time3::operator-(const Time3 & t) const
{
    Time3 diff;
    if(minutes >= t.minutes)
    {
        diff.minutes = minutes - t.minutes;
        diff.hours = hours - t.hours;
    }
    else
    {
        diff.minutes = minutes +60 - t.minutes;
        diff.hours = hours - t.hours -1;
    }
    return diff;
}
Time3 Time3::operator*(double n) const
{
    Time3 mul;
    long totalminutes = hours * n + minutes * n;
    mul.hours = totalminutes / 60;
    mul.minutes = totalminutes % 60;
    return mul;
}

std::ostream & operator<<(std::ostream & os,const Time3 & t)
{
    os <<t.hours <<": "<<t.minutes <<endl;
    return os;
}
void Time3::show() const
{
    cout << hours << ": "<< minutes <<endl;
}
