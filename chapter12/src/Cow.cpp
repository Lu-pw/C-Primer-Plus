/*作者：lu
  日期：
  版权：
*/ #include "Cow.h"

Cow::Cow()
{
    //ctor
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}
Cow::Cow(const char * nm,const char * ho, double wt)
{
    strcpy(name,nm);

    int len;
    len = strlen(ho);
    hobby = new char[len];
    strcpy(hobby,ho);

    weight = wt;
}
Cow::Cow(const Cow &c)
{
    strcpy(name ,c.name);
    int len;
    len = strlen(c.hobby);
    hobby = new char[len];
    strcpy(hobby,c.hobby);
    weight = c.weight;
}
Cow::Cow::~Cow()
{
    //dtor
}
Cow & Cow::operator = (const Cow & c)
{
    strcpy(name,c.name);
    int len;
    len = strlen(c.hobby);
    hobby = new char[len];
    strcpy(hobby,c.hobby);

    weight = c.weight;

    return *this;
}
void Cow::showcow() const
{
    cout << name <<endl;
    cout << hobby << ": " << weight <<endl;
}
