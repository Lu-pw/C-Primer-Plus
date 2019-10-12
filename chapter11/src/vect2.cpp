/*作者：lu
  日期：
  版权：
*/ #include "vect2.h"
#include <cmath>

using namespace std;

namespace VECTOR2
{
const double Rad_to_deg = 45.0 / atan(1.0);




Vector2::Vector2()
{
    x = y = 0.0;
    mode = RECT;
}
Vector2::Vector2(double n1,double n2,Mode form)
{
    mode = form;
    if(form == RECT)
    {
        x = n1;
        y = n2;
    }
    else if(form == POL)
    {
        x = n1 * sin(n2);
        y = n1 * cos(n2);
    }
    else
    {
        cout << "incorrect 3rd argument to vector()--";
        cout << "vector set to 0\n";
        x = y = 0.0;
        mode = RECT;
    }
}

void Vector2::reset(double n1,double n2,Mode form)
{
    mode = form;
    if(form == RECT)
    {
        x = n1;
        y = n2;
    }
    else if(form == POL)
    {
        x = n1 * sin(n2);
        y = n1 * cos(n2);
    }
    else
    {
        cout << "incorrect 3rd argument to vector()--";
        cout << "vector set to 0\n";
        x = y = 0.0;
        mode = RECT;
    }
}
Vector2::~Vector2()    // destructor
{

}
void Vector2::polar_mode()
{
    mode = POL;
}
void Vector2::rect_mode()
{
    mode = RECT;
}
Vector2 Vector2::operator+(const Vector2 & b) const
{
    return Vector2(x+b.x,y+b.y);
}

Vector2 Vector2::operator-(const Vector2 & b) const
{
    return Vector2(x-b.x,y-b.y);
}
Vector2 Vector2::operator*(double n) const
{
    return Vector2(n*x,n*y);
}
Vector2 Vector2::operator-() const
{
    return Vector2(-x,-y);
}


Vector2 operator*(double n,const Vector2 & a)
{
    return n*a;
}

std::ostream & operator << (std::ostream & os,const Vector2 & v)
{
    if (v.mode == Vector2::RECT)
        os << "(x,y) = (" << v.x <<", " << v.y << ")";
    else if(v.mode == Vector2::POL)
    {
        os << "(m,a) = (" << v.magval() << ","
           <<v.angval() << ")";
    }
    else
        os << "vector object mode is invalid";
    return os;
}

}
