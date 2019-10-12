#ifndef MOVE_H
#define MOVE_H
#include <iostream>

using namespace std;
class MOVE
{
    private:
        double x;
        double y;
    public:
        MOVE(double a=0,double b =0);
//        virtual ~MOVE();
        showmove() const;
        MOVE add(const MOVE & m) const;
        reset(double a = 0,double b = 0);
        void Setx(double lx)
        {
            if(lx<0)
            {
                x = -lx;
            }
            else{x = lx;}
        };



    protected:



};

#endif // MOVE_H
