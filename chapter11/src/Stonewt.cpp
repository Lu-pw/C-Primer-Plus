/*作者：lu
  日期：
  版权：
*/ #include "Stonewt.h"

Stonewt::Stonewt()
{
    //ctor
    units.pound = 0;
    units.stone = 0;
}
unit Stonewt::multi(unit &t_unit,double p_multi)
{
    t_unit.pound *= p_multi;
    t_unit.stone *= p_multi;
    if(t_unit.stone > 14)
    {
        t_unit.pound += t_unit.stone/14;
        t_unit.stone = t_unit.stone%14;
    }
    unit n = unit{t_unit.pound,t_unit.stone};
    units.pound = t_unit.pound;
    units.stone = t_unit.stone;
    return n;

}
void Stonewt::show()
{
    cout << units.pound << "\t" << units.stone <<endl;
}
Stonewt::~Stonewt()
{
    //dtor
}
