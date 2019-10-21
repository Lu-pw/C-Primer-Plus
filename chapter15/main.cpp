#include <iostream>
#include "Enum_tv.h"
#include "exc_mean.h"//2原文
#include <cmath>
#include <typeinfo>
#include <stdexcept>

using namespace std;

//////**< 复习题1 */
//1.
////a.
//class snap
//{
//    friend class clasp;
//};
//class clasp
//{
//};
////b.
//class muff;
//class cuff
//{
//public:
//    void snip(muff &) {}
//};
//class muff
//{
//    friend void cuff::snip(muff &);
//};

////c.
//class muff;
//class cuff
//{
//public:
//    void snip(muff &){};
//};
//
//class muff
//{
//    friend void cuff::snip(muff &);
//};




///////////////1.
//int main()
//{
//    TV t;
//    t.settings();
//
//    Remote r;
//    r.show_gmode();
//
//    r.onoff(t);
//    t.settings();
//
//    t.set_gmode(r);
//    r.show_gmode();
//
//    return 0;
//}
//



//////////2.
//double hmean(double a,double b);
//double gmean(double a,double b);
//int main()
//{
//    double x,y,z;
//
//    cout << "enter two numbers: ";
//    while(cin >> x >> y)
//    {
//        try{
//            z = hmean(x,y);
//            cout << "harmonic mean of " << x <<" and " << y << " is "
//            << z << endl;
//            cout << "geometric mean of "<<x << " and " << y <<
//            " is " << gmean(x,y) << endl;
//            cout <<  "enter the next two number (q to quit): \n";
//        }
//        catch (bad_hmean & bg)
//        {
//            bg.mesg();
//            cout << "try again.\n";
//            continue;
//        }
//        catch(bad_gmean & hg)
//        {
//            cout << hg.mesg();
//            cout << "values used: " << hg.v1 << ", "
//            <<hg.v2 << endl;
//            cout << "sorry,you don't get to play an more.\n";
//            break;
//        }
//    }
//}
//double hmean(double a,double b)
//{
//    if(a == -b)
//    {
//        throw bad_hmean(a,b);
//    }
//    return 2.0 *a * b / (a + b);
//}
//
//double gmean(double a,double b)
//{
//    if((a < 0) || (b <0))
//    {
//        throw bad_gmean(a,b);
//    }
//
//    return sqrt(a * b);
//}





/////////2.
//class bad_hmean:public logic_error
//{
//private:
//    string name;
//    double v1;
//    double v2;
//public:
//    explicit bad_hmean(const string &n = "hmean",const string & s = "error in hmean()",double a = 0,double b = 0);
//    void mesg();
//    const char * what() {return "bad arguments in hmean()\n";}
//    ~bad_hmean() throw() {};
//};
//
//bad_hmean::bad_hmean(const string &n,const string &s,double a,double b)
//:name(n),logic_error(s),v1(a),v2(b) {}
//inline void bad_hmean::mesg()
//{
//    cout << "hmean (" <<v1 << "," << v2 << "): " << "invalid argument a=-b\n";
//}
//
//double hmean(double,double);
//int main()
//{
//    double x,y,z;
//    cout << "enter two numbers: " <<endl;
//    while (cin >>x >> y)
//    {
//        try{
//            cout << hmean(x,y) << " =  hmean: (" << x << ", " << y <<")\n";
//        }
//        catch(bad_hmean & bh)
//        {
//            bh.mesg();
//            cout << bh.what();
//        }
//    }
//}
//double hmean(double a,double b)
//{
//    if(a == -b)
//    {
//        throw bad_hmean("hmean", "error", a,b);
//    }
//    return 2 * a * b / (a + b);
//}





//////////3.
//class bad : public logic_error
//{
//public:
//    string name;
//    double v1;
//    double v2;
//    explicit bad(const string &n,const string &s,double a,double b);
//    void mesg();
//};
//inline bad::bad(const string &n,const string &s,double a,double b)
//    :name(n),logic_error(s),v1(a),v2(b)
//{
//
//};
//inline void bad::mesg()
//{
//    cout << "error happend;\n";
//}
//
//class bad_hmean:public bad
//{
//public:
//    explicit bad_hmean(const string &n="hmean",const string &s="error in hmean()\n",double a=0,double b = 0);
//    void mesg();
//    const char * what()
//    {
//        return "bad argument in hmean\n";
//    }
//    virtual ~bad_hmean() throw() {}
//};
//
//
//bad_hmean::bad_hmean(const string &n,const string &s,double a,double b)
//    :bad(n,s,a,b) {};
//
//inline void bad_hmean::mesg()
//{
//    cout << "hmean (" <<v1 << ", "<<v2 << "): " << "invalid argument: a= -b\n";
//}
//
//class bad_gmean:public bad
//{
//public:
//    explicit bad_gmean(const string &n = "gmean",const string &s = "error in gmean()",double a = 0,double b=0)
//        :bad(n,s,a,b){} ;
//    const char * mesg();
//    const char * what()
//    {
//        return "bad argument in gmean()\n";
//    }
//    virtual ~bad_gmean() throw() {}
//};
//
//
//
//inline const char *bad_gmean::mesg()
//{
//    return "gmean() argument should be >=0 \n";
//}
//
//double hmean(double a,double b);
//double gmean(double a,double b);
//
//int main()
//{
//    double x,y,z;
//    cout << "enter two numbers: ";
//    while(cin >> x >> y)
//    {
//        try{
//            z = hmean(x,y);
//            cout << "harmonic mean of " <<x << " and "<<y << " is " << z << endl;
//            cout << "geometric mean of " << x << " and "<<y << " is " << gmean(x,y) <<endl;
//            cout << "enter next set of two numbers :";
//        }
//        catch(bad & b)
//        {
//            b.mesg();
//            if(b.name == "hmean")
//            {
//                cout << ((bad_hmean &)b).what();
//                cout << "error message: ";
//                ((bad_hmean &)b).mesg();
//                cout << "sorry ,you don't get to play anymore.\n";
//                break;
//            }
//            else if(b.name == "gmean")
//            {
//                cout << ((bad_gmean &)b).what();
//                cout << "err message: ";
//                cout << ((bad_gmean &)b).mesg();
//                cout << "values used: " << ((bad_gmean &)b).v1 << ", " << ((bad_gmean &)b).v2 <<endl;
//                cout << "sorry you can't play anymore.\n";
//                break;
//            }
//            else{
//                cout << "input error.\nterminated.\n";
//                system("pause");
//                exit(EXIT_FAILURE);
//            }
//        }
//    }
//    system("pause");
//}
//
//
//double hmean(double a,double b)
//{
//    if(a == -b)
//    {
//        throw bad("hmean","error in hmean()",a,b);
//    }
//    return 2.0*a*b/(a+b);
//}
//double gmean(double a,double b)
//{
//    if(a < 0 || b <0)
//    {
//        throw bad("gmean","error in gmean()",a,b);
//    }
//    return sqrt(a*b);
//}





////////4.

//头文件
class Sales
{
public:
    enum {MONTHS = 12};
    class bad_index : public logic_error
    {
    private:
        int bi;
    public:
        explicit bad_index(int ix,const string &s = "index error in sales object\n")
        :logic_error(s),bi(ix){};
        int bi_val() const
        {
            return bi;
        }
        virtual ~bad_index() throw() {}
    };
    explicit Sales(int yy = 0)
    {
        year = yy;
        for (int i=0; i<MONTHS; ++i)
            gross[i] = 0;
    }

    Sales(int yy,double const * gr,int n)
    {
        year = yy;
        int lim = (n < MONTHS)?n:MONTHS;
        int i;
        for(i=0; i<lim; ++i)
            gross[i] = gr[i];
        for(; i<MONTHS; ++i)
        {
            gross[i] = 0;
        }
    }
    virtual ~Sales() {};
    int Year() const
    {
        return year;
    }
    virtual double operator[](int i)const
    {
        if(i<0||i>=MONTHS)
            throw bad_index(i);
        return gross[i];
    }
    virtual double & operator [] (int i)
    {
        if(i<0||i>MONTHS)
            throw bad_index(i);
        return gross[i];
    }
    double gross[MONTHS];
private:

    int year;
};

class labeledSales:public Sales
{
public:
    class nbad_index:public Sales::bad_index
    {
    private:
        string lbl;
    public:
        nbad_index(const string & lb,int ix,const string & s = "index error in labelSales object\n")
            :Sales::bad_index(ix,s)
        {
            lbl = lb;
        }
        const string  & label_val() const
        {
            return lbl;
        }
        virtual ~nbad_index() throw() {}
    };
    explicit labeledSales(const string & lb = "none",int yy = 0)
        :Sales(yy)
    {
        label = lb;
    };
    labeledSales(const string & lb,int yy,const double *gr,int n)
        :Sales(yy,gr,n)
    {
        label = lb;
    };
    virtual ~labeledSales() {}
    const string & Label() const
    {
        return label;
    }
    virtual double operator[](int i)const
    {
        if(i < 0 || i >= MONTHS)
            throw nbad_index(Label(),i);
        return Sales::operator[](i);
    }
    virtual double & operator[](int i)
    {
        if(i < 0 || i >= MONTHS)
            throw nbad_index(Label(),i);
        return Sales::operator[](i);
    };
private:
    string label;
};











//主函数
//int main()
//{
//    double vals1[12] =
//    {
//        1220,1100,1122,2212,1223,2334,
//        2884,2393,3302,2922,3002,3544
//    };
//    double vals2[12] =
//    {
//        12,11,22,21,32,34,
//        28,29,33,29,32,35
//    };
//
//    Sales sales1(2011,vals1,12);
//    labeledSales sales2("Blogstar",2012,vals2,12);
//
//    cout << "first try block:\n";
//    try
//    {
//        int i ;
//        cout << "year = " << sales1.Year() <<endl;
//
//        for(i = 0; i<12; ++i)
//        {
//            cout << sales1[i] << ' ';
//            if(i % 6 == 5)
//                cout <<endl;
//        }
//        cout << "year = " <<sales2.Year() <<endl;
//        cout << "label = " <<sales2.Label() <<endl;
//        for(i = 0; i<=12; ++i)
//        {
//            cout << sales2[i] << ' ';
//            if(i%6 == 5)
//                cout <<endl;
//        }
//        cout << "end of try block 1.\n";
//    }
//    catch(labeledSales::nbad_index & bad)
//    {
//        cout << bad.what();
//        cout << "company: " << bad.label_val() <<endl;
//        cout <<"bad index: " <<bad.bi_val() <<endl;
//    }
//    catch(Sales::bad_index & bad)
//    {
//        cout << bad.what();
//        cout << "bad index: "<<bad.bi_val() <<endl;
//    }
//    cout << "\nnext try block:\n";
//    try
//    {
//        sales2[2] = 37.5;
//        sales1[15] = 23345;
//        cout << "end of try block 2.\n";
//    }
//    catch(labeledSales::nbad_index & bad)
//    {
//        cout << bad.what();
//        cout << "company: " <<bad.label_val() << endl;
//        cout << "bad index: " << bad.bi_val() << endl;
//    }
//    catch(Sales::bad_index & bad)
//    {
//        cout << bad.what();
//        cout << "bad index: " << bad.bi_val() <<endl;
//    }
//}


int main()
{
    double vals1[12] =
    {
        1220,1100,1122,2212,1223,2334,
        2884,2393,3302,2922,3002,3544
    };
    double vals2[12] =
    {
        12,11,22,21,32,34,
        28,29,33,29,32,35
    };

    Sales sales1(2011,vals1,12);
    labeledSales sales2("Blogstar",2012,vals2,12);

    cout << "first try block:\n";
    try
    {
        int i ;
        cout << "year = " << sales1.Year() <<endl;

        for(i = 0; i<12; ++i)
        {
            cout << sales1[i] << ' ';
            if(i % 6 == 5)
                cout <<endl;
        }
        cout << "year = " <<sales2.Year() <<endl;
        cout << "label = " <<sales2.Label() <<endl;
        for(i = 0; i<=12; ++i)
        {
            cout << sales2[i] << ' ';
            if(i%6 == 5)
                cout << endl;
        }
        cout << "end of try block 1.\n";
    }

    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        if(typeid(bad) == typeid(labeledSales::nbad_index))
            cout << "company: " << ((labeledSales::nbad_index &)bad).label_val() <<endl;
        cout << "bad index: "<<bad.bi_val() <<endl;
    }
    cout << "\nnext try block:\n";
    try
    {
        sales2[2] = 37.5;
        sales1[15] = 23345;
        cout << "end of try block 2.\n";
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        if(typeid(bad) == typeid(labeledSales::nbad_index))
            cout << "company: " << ((labeledSales::nbad_index &)bad).label_val() << endl;
        cout << "bad index: " << bad.bi_val() <<endl;
    }
}
