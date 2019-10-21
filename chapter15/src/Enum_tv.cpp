/*作者：lu
  日期：
  版权：
*/ #include "Enum_tv.h"

bool TV::volup()
{
    if(volume < Maxval)
    {
        volume++;
        return true;
    }
    else
        return false;
}
bool TV::voldown()
{
    if(volume > Minval)
    {
        volume--;
        return true;
    }
    else
        return false;
}
void TV::chanup()
{
    if(channel < maxchannel)
    {
        channel++;
    }
    else
        channel = 1;
}
void TV::chandown()
{
    if(channel > 1)
    {
        channel--;
    }
    else
    {
        channel = maxchannel;
    }
}

void TV::set_gmode(Remote & r) const
{
    if(state == on)
        r.set_gmode();
}

