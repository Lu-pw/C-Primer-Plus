/*作者：lu
  日期：
  版权：
*/
#include "Cd.h"
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}
Cd::Cd(const char * s1,const char * s2,int n,double x)
{
    strcpy(performers,s1);
    strcpy(label,s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const
{
    cout << "Cd perfomers: " << performers <<"\n";
    cout << "Cd label: " << label <<"\n";
    cout << "Cd selections: " << selections <<"\n";
    cout << "Cd playtime: " << playtime <<"\n";
}
Cd & Cd::operator=(const Cd & d)
{
    Cd cd;
    strcpy(cd.performers,d.performers);
    strcpy(cd.label,d.label);
    cd.selections = d.selections;
    cd.playtime = d.playtime;
    return cd;
}
