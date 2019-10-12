/*作者：lu
  日期：
  版权：
*/ #include "stonewt6.h"

stonewt6::stonewt6()
{
    //ctor
    stone = pds_left = pounds = 0;
}
stonewt6::stonewt6(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn;
    pounds = lbs;
}
stonewt6::stonewt6(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}
stonewt6::~stonewt6()
{
    //dtor
}
