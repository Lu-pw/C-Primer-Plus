#ifndef VECT2_H
#define VECT2_H
#include <iostream>
#include <cmath>
namespace VECTOR2
{
    class Vector2
    {
        public:
            enum Mode {RECT,POL};


        protected:

        private:
            double x;//Œª÷√
            double y;
            Mode mode;


            void set_x();
            void set_y();

        public:
            Vector2();
            Vector2(double n1,double n2,Mode form = RECT);
            void reset(double n1,double n2,Mode form = RECT);
            ~Vector2();
            double xval() const {return x;};
            double yval() const {return y;};
            double magval() const{return sqrt(x*x+y*y);}
            double angval() const {return atan(x/y);}
            void polar_mode();
            void rect_mode();

            Vector2 operator+(const Vector2 & b) const;
            Vector2 operator-(const Vector2 & b) const;
            Vector2 operator*(double ) const;
            Vector2 operator-() const;

            friend Vector2 operator*(double n,const Vector2 & a);
            friend std::ostream & operator << (std::ostream & os,const Vector2 & v);
    };

}


#endif // VECT2_H
