/*作者：lu
  日期：
  版权：
*/ #include "emp.h"


emp::emp():fname("none"),lname("none"),job("none")
{

}
emp::emp(const string & fn,const string & ln,const string & j)
{
    fname = fn;
    lname = ln;
    job = j;
}
emp::~emp()
{

}
void emp::showAll() const
{
    cout << "fname: " << fname <<" lname: " <<lname << " job: " << job << " ";
}
void emp::setALL()
{
    cout << "enter first name: ";
    getline(cin,fname);
    cout << "enter second name: ";
    getline(cin,lname);
    cout << "enter the job: ";
    getline(cin,job);
}
ostream & operator << (ostream & os, const emp & e)
{
    os << e.fname << " " << e.lname << " " <<e.job <<endl;
    return os;
}




employee::employee():emp()
{

}
employee::employee(const string & fn,const string & ln,const string & j):emp(fn,ln,j)
{

}
void employee::showAll() const
{
    emp::showAll();
    cout << endl;
}
void employee::setALL()
{
    emp::setALL();
}




manager::manager():emp()
{
    inchargeof = 0;
}
manager::manager(const string & fn,const string & ln,const string & j,int ico):emp(fn,ln,j)
{
    inchargeof = ico;
}
manager::manager(const emp & e,int ico):emp(e)
{
    inchargeof = ico;
}
manager::manager(const manager & m):emp(m)
{
    inchargeof = m.inchargeof;
}
void manager::showAll() const
{
    emp::showAll();
    cout << "inchargeof: " << inchargeof << endl;
}
void manager::setALL()
{
    emp::setALL();
    cout << "enter the incharge of: ";
    cin >> inchargeof;
}





fink::fink()
{
    reportsto = "none";
}
fink::fink(const string & fn,const string &ln,const string &j,const string & rpo):emp(fn,ln,j)
{
    reportsto = rpo;
}
fink::fink(const emp &e,const string & rpo):emp(e)
{
    reportsto = rpo;
}
fink::fink(const fink & e):emp(e)
{
    reportsto = e.reportsto;
}
void fink::showAll() const
{
    emp::showAll();
    cout << "rpo: " << reportsto << endl;
}
void fink::setALL()
{
    emp::setALL();
    cout << "enter the rpo: ";
    getline(cin,reportsto).get();
}





highfink::highfink()
{

}
highfink::highfink(const string & fn,const  string &ln,const string &j,const string &rpo,int ico)
:fink(fn,ln,j,rpo),manager(fn,ln,j,ico)
{

}
highfink::highfink(const emp & e,const string & rpo,int ico):emp(e),fink(e,rpo),manager(e,ico)
{

}
highfink::highfink(const manager &m,const string & rpo):emp(m),manager(m),fink(m,rpo)
//多次继承勿忘基类
{

}
highfink::highfink(const highfink & h):fink(h),manager(h)
{

}
void highfink::showAll() const
{
    emp::showAll();
    cout << "rpo: " << fink::ReporesTo() << " inchargeof: " << manager::inChargeOf() << endl;
}
void highfink::setALL()
{
    emp::setALL();
    cout << "enter the rpo:";
    getline(cin,fink::ReporesTo());
    cout << "enter the inchargeof: ";
    cin >> manager::inChargeOf();
    cin.get();
}
