#ifndef GOLF_H
#define GOLF_H

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <new>

using namespace std;
const int len = 40;
struct golf
{
    char fullname[len];
    int handicap;
};


void setgolf(golf & g,const char* name,int hc);

int setgolf(golf & g);
void handicap(golf & g,int hc);

void showgolf(const golf & g);


#endif // GOLF_H
