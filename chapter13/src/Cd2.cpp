/*作者：lu
  日期：
  版权：
*/ #include "Cd2.h"


Cd2::Cd2(const char * s1,const char  * s2,int n, double x)
{
    int len;
    len = strlen(s1);
    performers = new char[len + 1];
    strcpy(performers,s1);
    len = strlen(s2);
    label = new char[len+1];
    strcpy(label,s2);
    selections = n;
    playtime = x;
}
Cd2::Cd2(const Cd2 & d)
{
    int len;
    len  = strlen(d.performers);
    performers = new char [len+1];
    strcpy(performers,d.performers);
    label = new char[strlen(d.label ) + 1];
    strcpy(label,d.label);
    selections = d.selections;
    playtime = d.playtime;
}
void Cd2::Report() const
{
    cout << "Cd2: peformers = " << performers <<endl;
    cout << "Cd2: label = " << label <<endl;
    cout << "Cd2: selections = " << selections <<endl;
    cout << "Cd2: playtime = " << playtime <<endl;
}
Cd2 & Cd2::operator = (const Cd2 & d)
{
    if(this == &d)
    {
        return *this;
    }

    delete [] performers;
    performers = new char [std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    delete [] label;
    label = new char [std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}
Cd2::Cd2()
{
    //ctor
    performers = new char[1];
    performers[0] = '\0';
    label = nullptr;

}

Cd2::~Cd2()
{
    //dtor
    delete [] performers;
    delete [] label;
    cout << "Cd2 类内容被释放" <<endl;
}
