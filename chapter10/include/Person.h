#ifndef PERSON_H
#define PERSON_H
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Person
{
    public:
//        Person();
        Person(){lname = "",fname[0] = '\0';};
        virtual ~Person();

        Person(const string & ln,const char * fn = "Heyyou");
        void Show() const;
        void FormalShow() const;

    protected:

    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];
};

#endif // PERSON_H
