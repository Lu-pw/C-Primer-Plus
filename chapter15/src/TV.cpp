/*���ߣ�lu
  ���ڣ�
  ��Ȩ��
*/ #include "TV.h"

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
    cout << state;
    if(state == on)
        r.set_gmode();
}

