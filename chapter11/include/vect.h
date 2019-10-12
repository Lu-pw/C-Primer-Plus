#ifndef VECT_H
#define VECT_H
#include <iostream>

namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT,POL};


        protected:

        private:
            double x;//Œª÷√
            double y;
            double mag;//œ‡Ω«
            double ang;
            Mode mode;

            void set_mag();
            void set_ang();
            void set_x();
            void set_y();

        public:
            Vector();
            Vector(double n1,double n2,Mode form = RECT);
            void reset(double n1,double n2,Mode form = RECT);
            ~Vector();
            double xval() const {return x;};
            double yval() const {return y;};
            double magval() const{return mag;}
            double angval() const {return ang;}
            void polar_mode();
            void rect_mode();

            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator*(double ) const;
            Vector operator-() const;

            friend Vector operator*(double n,const Vector & a);
            friend std::ostream & operator << (std::ostream & os,const Vector & v);
    };

}

#endif // VECT_H
