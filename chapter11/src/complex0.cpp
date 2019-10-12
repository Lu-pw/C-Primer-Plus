/*作者：lu
  日期：
  版权：
*/ #include "complex0.h"

complex0::complex0()
{
    //ctor
    x = 0;
    y = 0;
}

complex0::complex0(double a,double b)
{
    x = a;
    y = b;
}
complex0::~complex0()
{
    //dtor
}

complex0 complex0::operator+(const complex0 & c) const
{
    complex0 sum;
    sum.x = x + c.x;
    sum.y = y +c.y;
    return sum;
}
complex0 complex0::operator-(const complex0 & c) const
{
    complex0 diff;
    diff.x = x - c.x;
    diff.y = y - c.y;
    return diff;
}
complex0 complex0::operator*(const complex0 & c) const
{
    complex0 mul;
    mul.x = x * c.x - y * c.y;
    mul.y = x * c.y + y * c.x;
    return mul;
}
complex0 complex0::operator*(double n) const
{
    complex0 mul_r;
    mul_r.x = x * n;
    mul_r.y = y * n;
    return mul_r;
}
complex0 complex0::operator~() const
{
    complex0 op;
    op.x = x;
    op.y = -y;
    return op;
}
std::istream & operator >> (std::istream & is,complex0 & c)
{
    is >> c.x;
    is >> c.y;
    return is;
}
std::ostream & operator << (std::ostream & os,const complex0 & c)
{
    os << "(x,y): " << c.x << ", " << c.y << endl;
    return os;
}
complex0 operator*(double n, const complex0 & c)
{
    return c*n;
}
