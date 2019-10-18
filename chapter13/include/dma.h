#ifndef DMA_H
#define DMA_H
#include <cstring>
#include <iostream>

using namespace std;

class ABC
{
private:
    char  * label;
    int rating;

public:
    ABC (const char *lab = "null", int r = 0);
    ABC(const ABC & rs);
    virtual ~ABC();
    void View() const;
    ABC & operator = (const ABC & rs);
    friend ostream & operator << (ostream & os,const ABC &abc);
};
class dma:public ABC
{
    public:
        dma();
        dma(const char *lab = "null",int r = 0);
        virtual ~dma();
        friend ostream & operator << (ostream & os,const dma &dm);

    protected:

    private:
};


//不带dma的派生类
//不需要析构函数
//使用隐式复制构造函数
//使用隐式赋值运算符类
class lacksdma:public ABC
{
private:
    enum {col_len = 40};
    char color[col_len];
public:
    lacksdma(const char * c = "blank",const char * lab = "null",int r = 0);
    lacksdma(const char * c,const ABC & a);
    virtual void View() const;
    friend ostream & operator << (ostream & os,const lacksdma & rs);
};



//带dma的派生类
//使用了new 即指针处style
//此时必须定义显示析构函数
class hasdma:public ABC
{
private:
    char * style;
public:
    hasdma(const char * s = "none",const char * lab = "null", int r = 0);
    hasdma(const char * s,const ABC & c);
    ~hasdma();
    virtual void View() const;
    hasdma & operator = (const hasdma & rs);
    friend ostream & operator <<(ostream & os,const hasdma &hs);
};

#endif // DMA_H
