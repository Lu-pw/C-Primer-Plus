/*���ߣ�lu
  ���ڣ�
  ��Ȩ��
*/ #include "winec.h"


Wine::Wine():name("none"), year(0), pa(ArrayInt(0), ArrayInt(0))
{
    //ctor
}
Wine::Wine(const char *nm,int yr)
:name(nm),year(yr),pa(ArrayInt(yr),ArrayInt(yr))
{

}
Wine::Wine(const char * lnm,int y,const int yr[],const int bot[])
:name(lnm),year(y),pa(ArrayInt(yr,y),ArrayInt(bot,y))
//�����ڹ��캯���У�PairArrayΪ���๹�졣yr, y,bot, y Ϊ���캯���Ĳ���
/**************
valarray<double v1; // an array of double,size0
valarray<int> v2(8); //an array of 8 int elements;
valarray<int> v3(10,8); //an array of 8 int elements,each set to 10
valarray<double> v4(gpa,4); //an array of 4 elements,initialized to the first 4 elements of gpa
*****************/
{


}
Wine::~Wine()
{
    //dtor
}
void Wine::GetBottles()
//ĩβ��const��ʧЧ������ĩβ��const������ʹ�õ����ܸı����ݳ�Ա����
{
     int y,b;
     cout << "enter " << name <<" data for " << year<< " year(s)"  <<endl;

     for(int i=0;i<year; ++i)
     {
         cout << "enter years:";
         cin >> y;
         pa.first()[i] = y;
         cout<< "enter bottles for that year: ";
         cin >> b;
         pa.second()[i] = b;
     }
}


int Wine::sum() const
{
    return pa.second().sum();
}
void Wine::Show() const
{
    cout << "Wine: "<< name <<endl;
    cout << "Year " << "Bottles" << endl;
    for(int i=0;i<year;++i)
    {
        cout << pa.second()[i] << " ";
        cout << pa.first()[i] <<endl;
    }
}

