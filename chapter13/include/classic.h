#ifndef CLASSIC_H
#define CLASSIC_H
#include <iostream>
#include <cstring>
#include "Cd.h"
using namespace std;


class classic:public Cd
{
public:
    classic();
    classic(const char * w,const char *c1,const char * c2,int n1,double n2);
     virtual ~ classic();
    virtual void Report() const;
private:
    char works[100];

};



#endif // CLASSIC_H


