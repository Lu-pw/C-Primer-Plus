#ifndef COW_H
#define COW_H
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Cow
{
    public:
        Cow();
        Cow(const char * nm,const char * ho, double wt);
        Cow(const Cow & c);
        virtual ~Cow();
        Cow & operator = (const Cow & c);
        void showcow() const;
        char  get_name(){return name[20];}
        char * gethobby(){return hobby;}

    protected:

    private:
        char name[20];
        char * hobby;
        double weight;
};

#endif // COW_H
