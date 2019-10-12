/*作者：lu
  日期：
  版权：
*/ #include "Stonewt5.h"

Stonewt5::Stonewt5(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn;
    pounds = lbs;
}
Stonewt5::Stonewt5(int stn,double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}
Stonewt5::Stonewt5()
{
    //ctor
    stone = pounds = pds_left = 0;
    mode = tp_stn;
}
Stonewt5::Stonewt5(double tp,MODE form)
{
    stone = int(tp) / Lbs_per_stn;
    pds_left = int(tp) % Lbs_per_stn;
    pounds = tp;
    mode = form;
}
Stonewt5::Stonewt5(int stn,double lbs,MODE form)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = form;
}
Stonewt5::~Stonewt5()
{
    //dtor
}
Stonewt5 Stonewt5::operator+(Stonewt5 & t) const
{
    Stonewt5 sum;
    sum.stone = stone + t.stone;
    sum.pounds = pounds + t.pounds;
    sum.pds_left = pds_left + t.pds_left;
    return sum;
}
Stonewt5 Stonewt5::operator-(Stonewt5 & t) const
{
    Stonewt5 diff;
    diff.stone = stone - t.stone;
    diff.pounds = pounds - t.pounds;
    diff.pds_left = pds_left - t.pds_left;
    return diff;
}
Stonewt5 Stonewt5::operator*(double p) const
{
    Stonewt5 mul;
    mul.stone = stone * p + pds_left * p / Lbs_per_stn;
    mul.pounds = pounds * p;
    mul.pds_left = int(pds_left * p) % Lbs_per_stn;
    return mul;
}
std::ostream & operator<<(std::ostream & os,const Stonewt5 & st)
{
    if(st.mode == Stonewt5::tp_stn)
    {
        std::cout << st.stone <<", " << st.pds_left <<endl;
    }
    else if(st.mode == Stonewt5::tp_pds)
    {
        std::cout << st.pounds << endl;
    }
    else
    {
        cout << "mode fault!" <<endl;
    }
}

