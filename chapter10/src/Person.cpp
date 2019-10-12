/*作者：lu
  日期：
  版权：
*/ #include "Person.h"


Person::Person(const string & ln,const char * fn )
{
    lname = ln;
    for(int i=0;i<LIMIT;i++)
    {
        fname[i] = *(fn+i);
    }

}
void Person::Show() const
{
    cout << lname <<"\t"<<fname << endl;
}
void Person::FormalShow() const
{
    cout << lname <<"\t"<<fname <<endl;
}
Person::~Person()
{
    //dtor
}
