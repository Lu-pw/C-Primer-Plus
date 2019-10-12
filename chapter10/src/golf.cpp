/*作者：lu
  日期：
  版权：
*/ #include "golf.h"



//void golf::setgolf(const char * p_name,int hc = 120)
//{
//    for(int i= 0;i<len;i++)
//    {
//        fullname[i] = *(p_name+i);
//        handicap = hc;
//    }
//}
//int golf::setgolf()
//{
//    cout << "执行了" << endl;
//}
//void golf::handicap1(int hc)
//{
//    handicap = hc;
//}
//void golf::showgolf()
//{
//    cout << fullname << "\t" << handicap << endl;
//}
//golf::~golf()
//{
//    //dtor
//}





golf::golf(const char * name, int hc)
{
    strncpy(fullname, name, Len);
    handicap = hc;
}
golf::golf()
{
    char temp[Len] = "";
    int hand = 0;
    cout << "Please enter the full name of golf player: ";
    cin.getline(temp, Len);

    cout << "Please enter the hanicap of golf player: ";
    cin >> hand;
    cin.get();

    *this = golf(temp, hand);
}
void golf::sethandicap(int hc)
{
    handicap = hc;
}
void golf::showgolf()
{
    cout << "golf full name: " << fullname << endl;
    cout << "golf handicap: " << handicap << endl;
}





//4.
