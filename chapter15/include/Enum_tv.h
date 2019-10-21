#ifndef ENUM_TV_H
#define ENUM_TV_H
#include <iostream>
using namespace std;

class Remote;
class TV
{
public:
    friend class Remote;
    enum {off, on};
    enum {Minval = 0, Maxval = 20};//音量
    enum {Antenna,Cable}; //模式
    enum {Tv,DVD};//输入


protected:

private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    TV(int s = off,int mc = 125)
        :state(s),volume(5),maxchannel(mc),channel(2),mode(Cable),input(DVD)
    {

    }
    void onoff()
    {
        state = (state == on)?off:on;
    }
    bool ison() const
    {
        return state == on;
    }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode()
    {
        mode = (mode == Antenna)?Cable:Antenna;
    }
    void set_input()
    {
        input = (input == Tv)?DVD:Tv;
    }
    void settings() const
    {
        cout << "TV is "<< ((state == on)?"on":"off") << endl;
        if(state == on)
        {
            cout << "Volume setting = " << volume << endl;
            cout << "Channel setting = " << channel << endl;
            cout << "Mode = " << (mode == Antenna?"Antenna": "Cable") <<endl;
            cout << "Input = " << (input == Tv ? "TV":"DVD") << endl;
        }
    };
    void set_gmode(Remote & r) const;
};


class Remote
{
private:
    int mode;
    int gmode;
public:
    friend class TV;
    enum {Normal, Interactive};//常规、互动
public:
    Remote(int m = TV::Tv):mode(m),gmode(Normal) {}
    bool volup(TV & t)
    {
        return t.volup();
    }
    bool voldown(TV & t)
    {
        return t.voldown();
    }
    void onoff(TV &t)
    {
        t.onoff();
    }
    void chanup(TV & t)
    {
        t.chanup();
    }
    void chandown(TV & t)
    {
        t.chandown();
    }
    void set_chan(TV & t,int v)
    {
        t.channel = v;
    }
    void set_mode(TV& t)
    {
        t.set_mode();
    }
    void set_input(TV & t)
    {
        t.set_input();
    }
    void show_gmode() const;
    void set_gmode();
};

inline void Remote::show_gmode() const
{
    cout << (gmode == Normal ? "Normal": "Interactive" ) << endl;
}

inline void Remote::set_gmode()
{
    gmode = (gmode == Normal) ? Interactive : Normal;
}
#endif // ENUM_TEST_H
