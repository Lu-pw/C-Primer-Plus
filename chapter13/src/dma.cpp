/*作者：lu
  日期：
  版权：
*/ #include "dma.h"


ABC::ABC (const char *lab, int r)
{
    label = new char[strlen(lab) + 1];
    strcpy(label,lab);
    rating = r;
}
ABC::ABC(const ABC & rs)
{
    label = new char[strlen(rs.label) + 1];
    strcpy(label,rs.label);
    rating = rs.rating;
}

ABC::~ABC()
{
    delete [] label;
}
void ABC::View() const
{
    cout << "ABC: label = " << label << "\t";
    cout << "ABC: rating = " << rating << endl;
}
ABC & ABC::operator = (const ABC & rs)
{
    if(this == & rs)
        return *this;
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label,rs.label);
    rating = rs.rating;
    return * this;
}
ostream & operator << (ostream & os,const ABC &abc)
{
    os << "ABC: label = " << abc.label <<"\t";
    os << "ABC: rating = " <<abc.rating <<endl;
    return os;
}
dma::dma()
{
    //ctor
}
dma::dma(const char *lab,int r):ABC(lab,r)
{

}
dma::~dma()
{
    //dtor
}
ostream & operator << (ostream & os,const dma &dm)
{
    os << (const ABC&) dm;
    return os;
}




///////////////////////////隐式调用了调用了析构函数
lacksdma::lacksdma(const char * c,const char * lab,int r):ABC(lab,r)
{
    strcpy(color,c);

}
lacksdma::lacksdma(const char * c,const ABC & a):ABC(a)
{
    strcpy(color,c);
}
void lacksdma::View() const
{
    ABC::View();
    cout << "lacksdma: color = " << color << endl;
}
ostream & operator << (ostream & os,const lacksdma & rs)
{
    os << (const ABC &)rs;
    os<< "lacksdma: color = " << rs.color << endl;
    return os;
}



//////////////////////
hasdma::hasdma(const char * s,const char * lab, int r):ABC(lab,r)
{
    style = new char[strlen(s) + 1];
    strcpy(style,s);
}
hasdma::hasdma(const char * s,const ABC & c):ABC(c)
{
    style = new char[strlen(s) + 1];
    strcpy(style,s);
}
hasdma::~hasdma()
{
    delete [] style;
}
void hasdma::View() const
{
    ABC::View();
    cout << "hasdma: style = "<< style << endl;
}
hasdma & hasdma::operator = (const hasdma & rs)
{
    if(this == &rs)
        return *this;
    delete [] style;
    style = new char[strlen(rs.style) + 1];
    strcpy(style,rs.style);
    ABC::operator=(rs);
    return * this;
}
ostream & operator << (ostream & os,const hasdma &hs)
{
    os<< (const ABC &) hs;
    os << "hasdma: style = " << hs.style << endl;
    return os;
}
