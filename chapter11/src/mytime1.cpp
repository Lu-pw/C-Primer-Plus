/*���ߣ�lu
  ���ڣ�
  ��Ȩ��
*/ #include "mytime1.h"

Time::Time()
{
    //ctor
    hours = minutes = 0;
}

Time::Time(int h,int m)
{
    hours = h;
    minutes = m;
}
void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes/60;
    minutes %= 60;
}
void Time::AddHr(int h)
{
    hours += h;
}
void Time::Reset(int h,int m)
{
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;

}
void Time::show() const
{
    cout << hours << ": "<< minutes <<endl;
}
