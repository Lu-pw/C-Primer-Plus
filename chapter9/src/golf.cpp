/*作者：lu
  日期：
  版权：
*/ #include "golf.h"


void setgolf(golf & g,const char * name,int hc)
{
    strcpy(g.fullname,name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    cout << "enter the fullname: ";
    cin.getline(g.fullname,len);
    if(strcmp(g.fullname,"") == 0)
    {
        return 0;
    }
    cout << "enter the hanicap of golf player: ";
    cin >> g.handicap;
    return 1;
}
void handicap(golf & g,int hc)
{
    g.handicap = hc;

}
void showgolf(const golf & g)
{
    cout << "name: " << g.fullname << "\thandicap: "<<g.handicap <<endl;
}
