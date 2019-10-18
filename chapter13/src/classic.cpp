#include "classic.h"
#include <iostream>
#include <cstring>

using namespace std;



classic::classic()
{
    works[0] = '\0';
}
classic::classic(const char * w,const char *c1,const char * c2,int n1,double n2):Cd(c1,c2,n1,n2)
{
    strcpy(works,w);
}
classic::~ classic()
{
    cout << "classic 类内容被释放" << endl;
};
void classic::Report() const
{
    cout << "classic: works: " << works <<endl;
}


