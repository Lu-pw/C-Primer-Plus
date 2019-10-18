/*作者：lu
  日期：
  版权：
*/ #include "classic2.h"
#include <iostream>
#include <cstring>

using namespace std;



classic2::classic2()
{
    works = new char [1];
    works[0] = '\0';
}
classic2::classic2(const char * w,const char *c1,const char * c2,int n1,double n2):Cd2(c1,c2,n1,n2)
{
    works = new char[strlen(w)+1];
    strcpy(works,w);
}
classic2::classic2(const classic2 & c)
{
    works = new char[strlen(c.works)+1];
    strcpy(works,c.works);
}
classic2::~ classic2()
{
    delete [] works;
    cout << "classic2 类内容被释放" << endl;
};
void classic2::Report() const
{
    cout << "classic2: works: " << works <<endl;
}
classic2 & classic2::operator=(const classic2 & c)
{
    if (this == &c)
        return *this;

    Cd2::operator=(c);
    delete [] works;
    works = new char [std::strlen(c.works) + 1];
    std::strcpy(works, c.works);

    return *this;
}
