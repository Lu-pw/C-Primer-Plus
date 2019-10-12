/*作者：lu
  日期：
  版权：
*/ #include "MOVE.h"
MOVE::MOVE(double a,double b)
{
    x = a;
    y = b;
}
MOVE::showmove() const
{
    cout << x <<"\t"<<y<<endl;
}
MOVE MOVE::add(const MOVE & m) const
{
    MOVE n = MOVE(x+m.x,y+m.y);
    return n;
}
MOVE::reset(double a ,double b )
{

    x = a;
    y = b;
}


//MOVE::~MOVE()
//{
//    //dtor
//}
