#ifndef COMPLEX0_H
#define COMPLEX0_H
#include <iostream>

using namespace std;

class complex0
{
    public:
        complex0();
        complex0(double a,double b);
        virtual ~complex0();
        complex0 operator+(const complex0 & c) const;
        complex0 operator-(const complex0 & c) const;
        complex0 operator*(const complex0 & c) const;
        complex0 operator*(double n) const;

        complex0 operator~() const;
        friend complex0 operator*(double n, const complex0 & c);
        friend std::istream & operator >> (std::istream & is,complex0 & c);
        friend std::ostream & operator<<(std::ostream & os,const complex0 & c);

    protected:

    private:
        double x;
        double y;
};



#endif // COMPLEX0_H
