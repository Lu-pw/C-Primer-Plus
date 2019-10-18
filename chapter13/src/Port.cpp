/*作者：lu
  日期：
  版权：
*/ #include "Port.h"

Port::Port(const char * br, const char * st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand,br);
    strcpy(style,st);
    bottles = b;
}
Port::Port(const Port & p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles = p.bottles;
}

Port & Port::operator = (const Port & p)
{
    if(this == &p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles = p.bottles;
    return * this;
}
Port & Port::operator += (int b)
{
    bottles += b;
    return *this;
}
Port & Port::operator -= (int b)
{
    bottles -= b;
    return *this;
}
void Port::Show() const
{
    cout << "Brand：" << brand <<endl;
    cout << "Kind：" << style <<endl;
    cout << "Bottles: "<< bottles <<endl;
}
ostream & operator<< (ostream & os,const Port &p)
{
    os << p.brand << ", "<< p.style << ", " << p.bottles ;
}




VintagePort::VintagePort()
{
    nickname = nullptr;
    year = 0;
}
VintagePort::VintagePort(const char * br,int b,const char * nn,int y):Port(br,"virage",b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname,nn);
    year = y;
}
VintagePort::VintagePort(const VintagePort & vp)//:Port(vp)
{
    //基类私有brand等故转换后调用，或者上方直接继承
    Port((const Port &)vp);
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname,vp.nickname);
    year = vp.year;
}
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if(this == &vp)
        return *this;
    delete [] nickname;
    nickname = new char [strlen(vp.nickname) + 1];
    strcpy(nickname,vp.nickname);
    year = vp.year;
    Port::operator=(vp);
    return * this;
}
void VintagePort::show() const
{
    Port::Show();
    cout << "nickname: " <<nickname <<endl;
    cout << "year: " << year << endl;
}
ostream & operator << (ostream & os,const VintagePort & vp)
{
    os << (const Port &)vp;
    os << ", " << vp.nickname << ", " << vp.year <<endl;
    return os;
}
