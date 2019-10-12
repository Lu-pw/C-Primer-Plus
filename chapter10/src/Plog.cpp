/*作者：lu
  日期：
  版权：
*/ #include "Plog.h"

Plog::Plog(char lname[19])
{
    //ctor
    for(int i = 0;i<19;i++)
    {
        name[i] = lname[i];
    }
}
void Plog::SetPlog(char s_name[],int s_n)
{
    for(int i=0;i<19;i++)
    {
        name[i] = s_name[i];
    }
    ci = s_n;

}
void Plog::SetCi(int s_ci)
{
    ci = s_ci;
}
void Plog::show() const
{
    cout << name <<": " <<ci<<endl;
}
Plog::~Plog()
{
    //dtor
}
