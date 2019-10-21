#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <string>

using namespace std;

class worker
{
    public:
        worker():fullname("none"),id(0L){};
        worker(const string & s,long n):fullname(s),id(n)
        {
        }
        virtual ~worker(){};
        virtual void set();
        virtual void show();


    protected:

    private:
        string fullname;
        long id;
};

#endif // WORKER_H
