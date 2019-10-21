/*作者：lu
  日期：
  版权：
*/ #include "wine2.h"

wine2::wine2()
{
    //ctor
}
wine2::wine2(const char * lb,const int yr):label(lb),years(yr),PairArray(ArrayInt(0),ArrayInt(0))
{

}
wine2::wine2(const char * lb,const int yr,const int yrs[],const int bot[]):label(lb),years(yr),PairArray(ArrayInt(yrs,yr),ArrayInt(bot,yr))
{

}
wine2::~wine2()
{
    //dtor
}

void wine2::Show() const
{
    cout << "Wine: " << label << endl;
    cout << "Year "<< " Bottles" <<endl;
    for(int i = 0; i <years;i++)
    {
        cout << PairArray::second()[i]<< " ";
        cout << PairArray::first()[i] << endl;
    }
}
void wine2::GetBottle()
{
    int y , b;
    cout << "enter " << Label() << " data for " << years << "years" << endl;

    for(int i = 0;i<years ;i++)
    {
        cout << "enter year: ";
        cin >> y;
        cout << "enter bottle for that year: ";
        cin >> b;
        PairArray::first()[i] = y;
        PairArray::second()[i] = b;
    }
};

