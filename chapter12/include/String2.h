#ifndef STRING2_H
#define STRING2_H
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

class String2
{
    public:
        String2();
        String2(const char *s);
        String2(const String2 &);
        int HowMany();
        virtual ~String2();
        int length() const {return len;}
        void Stringlow() ;
        void Stringup() ;
        int has(char ch) const;


        String2 & operator = (const String2 &);
        String2 & operator = (const char *);
        char & operator [](int i);
        const char & operator[](int i) const;

        String2 operator +(const String2 & s) const;
        String2 operator+( const char * s) const;


        friend bool operator<(const String2 & st,const String2 & st2);
        friend bool operator<=(const String2 & st,const String2 & st2);
        friend bool operator>(const String2 & st,const String2 & st2);
        friend bool operator>=(const String2 & st,const String2 & st2);
        friend bool operator==(const String2 & st,const String2 & st2);
        friend ostream & operator << (ostream & os,const String2 & st);
        friend istream & operator >>(istream & is,const String2 & st);
        friend String2 operator + (const char *st1,const String2 & st2);


    protected:

    private:
        char *str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
};

#endif // STRING2_H
