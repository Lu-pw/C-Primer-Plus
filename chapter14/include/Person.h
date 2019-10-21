#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person
{
public:
    Person(){};
    Person(const string & st)
    {
        fullname = st;
    }
    virtual ~Person() {};
    void Set()
    {
        cin.get();
        cout << "enter name: "<< endl;
        getline(cin,fullname);
    };
    void show() const
    {
        cout << "fullname: " << fullname << " ";
    }


protected:

private:
    string fullname;
};




class Gunslinger:virtual public Person
{
private:
    double time;
    int nick;
public:
    Gunslinger(){};
    Gunslinger(Person &p,double t1,int n1):Person(p)
    {
        time = t1;
        nick = n1;
    }
    ~ Gunslinger() {};
    void Set(){
        Person::Set();
        cout << "enter the time: " ;
        cin >> time;
        cout << "enter the nick: ";
        cin >> nick;

    };
    double Draw()
    {
        return time;
    };
    void show() const
    {
        Person::show();
        cout << "  time: " << time << "  nick: "<< nick << endl;
    }

};

class PokerPlayer:virtual public Person
{
private:
    int value;

public:
    PokerPlayer(){};
    ~PokerPlayer(){};
    int Draw()
    {
        srand(time(NULL));
        value = rand() % 52 +1;
    }
    void show() const
    {
        Person::show();
        cout << "value: " << value << endl;
    }

};


class BadDude:public Gunslinger,public PokerPlayer
{
public:
    BadDude(){};
    ~BadDude(){};
    double Gdraw() {return Gunslinger::Draw();};
    int Cdraw() {return PokerPlayer::Draw();};
    void show() const
    {
        Gunslinger::show();
        PokerPlayer::show();
    }

private:

};

#endif // PERSON_H
