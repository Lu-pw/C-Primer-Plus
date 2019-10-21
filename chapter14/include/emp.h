#ifndef EMP_H
#define EMP_H
#include <iostream>
#include <string>

using namespace std;

class emp
{
    public:
        emp();
        emp(const string & fn,const string & ln,const string & j);
        virtual ~emp() = 0;
        virtual void showAll() const;
        virtual void setALL();
        friend ostream & operator << (ostream & os, const emp & e);

    protected:

    private:
        string fname;
        string lname;
        string job;
};



class employee :public emp
{
public:
    employee();
    employee(const string & fn,const string & ln,const string & j);
    virtual void showAll() const;
    virtual void setALL();
};


class manager: virtual public emp
{
private:
    int inchargeof;
protected:
    int inChargeOf() const {return inchargeof;}
    int &inChargeOf() {return inchargeof;}
public:
    manager();
    manager(const string & fn,const string & ln,const string & j,int ico = 0);
    manager(const emp & e,int ico);
    manager(const manager & m);
    virtual void showAll() const;
    virtual void setALL() ;
};


class fink:virtual public emp
{
private:
    string reportsto;
protected:
    const string ReporesTo() const {return reportsto;}
    string & ReporesTo() {return reportsto;}
public:
    fink();
    fink(const string & fn,const string &ln,const string &j,const string & rpo);
    fink(const emp &e ,const string & rpo);
    fink(const fink & e);
    virtual void showAll() const;
    virtual void setALL() ;

};


class highfink : public manager,public fink
{
public:
    highfink();
    highfink(const string & fn,const  string &ln,const string &j,const string &rpo,int ico);
    highfink(const emp & e,const string & rpo,int ico);
    highfink(const manager &m,const string & rpo);
    highfink(const highfink & h);
    virtual void showAll() const;
    virtual void setALL();

};
#endif // EMP_H
