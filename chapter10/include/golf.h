#ifndef GOLF_H
#define GOLF_H
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//class golf
//{
//    public:
//        golf()
//        {
//            fullname[0] = {'\0'};
//            handicap = 0 ;
//        };
//        virtual ~golf();
//        void setgolf(const char *p_name,int hc);
//        int setgolf();
//        void handicap1(int hc);
//        void showgolf();
//
//    protected:
//
//    private:
//        static const int len = 40;
//        char fullname[len];
//        int handicap;
//};



class golf {
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;

public:
    golf(const char * name, int hc);
    golf();
    void sethandicap(int hc);
    void showgolf();
};
#endif // GOLF_H
