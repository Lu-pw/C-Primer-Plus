#include <iostream>
//#include "bank_account.h"
//#include "Person.h"
//#include "golf.h"
//#include "SALES.h"
//#include "STACK.h"
//#include "MOVE.h"
//#include "Plog.h"
#include "list.h"

using namespace std;


//int main()
//{
//    bank_account client((string)"lisa",(string)"rong",1000);
//    string name = "kala";
//    string p_account = "nana";
//    int p_money = 6000;
////    client.show();
////    client.bank_account(name,p_account,p_money);
//    client.show();
//    client.input(999);
//    client.show();
//    client.ouput(666);
//    client.show();
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cctype>
//#include "bank_account.h"
//
//using namespace std;
//
//int main()
//{
//    bank_account Mybank_account("Jimmy", "1234567", 10000);
//    cout << "Original bank_account: " << endl;
//    Mybank_account.Showbank_account();
//
//    cout << endl;
//    cout << "After Deposit 5000: " << endl;
//    Mybank_account.Deposit(5000);
//    Mybank_account.Showbank_account();
//
//    cout << endl;
//    cout << "After withdrawals 5000: " << endl;
//    Mybank_account.WithDrawals(5000);
//    Mybank_account.Showbank_account();
//}



//2.
//int main()
//{
//    Person one;
//    Person two("Smythecraft");
//    Person three("Dimwiddy","Sam");
//    one.Show();
//    two.Show();
//    three.Show();
//    cout << endl;
//    one.FormalShow();
//    two.FormalShow();
//    three.FormalShow();
//}



//3.
//int main()
//{
//    golf g;
//    g.showgolf();
//    g.handicap1(100);
//    g.setgolf();
//    g.showgolf();
//    g.setgolf("lara",666);
//    g.showgolf();
//}



//int main()
//{
//    golf g;
//    golf g2("Jimmy", 100);
//
//    g.showgolf();
//    g.sethandicap(120);
//    g.showgolf();
//
//    g2.showgolf();
//    g2.sethandicap(120);
//    g2.showgolf();
//}




////4.
//int main()
//{
//    SALES seller;
//    int n = 3;
//    double arr[n] = {1,2,6};
//    seller.setSales(arr,n);
//    seller.setSales();
//    seller.showSales();
//}




////5.
//int main(void)
//{
//    using namespace std;
//    STACK st;
//    char ch;
//    Item item;
//    double total = 0.0;
//
//    cout << "Please enter A to add an customer" << endl;
//    cout << "p to pop a customer, Q to quit." << endl;
//
//    while(cin >> ch && toupper(ch) != 'Q')
//    {
//        while(cin.get() != '\n')
//            continue;
//
//        if(!isalpha(ch))//是数字返回true
//        {
//            cout << '\a' << "enter false!";
//            continue;
//        }
//
//        switch(ch)
//        {
//            case 'a':
//            case 'A':
//                cout << "Enter customer name: ";
//                cin.getline(item.fullname, 35);
//                cout << "Enter payment: ";
//                cin >> item.payment;
//                if(st.isfull())
//                    cout << "stack is full" << endl;
//                else
//                    st.push(item);
//                break;
//            case 'p':
//            case 'P':
//                if(st.isempty())
//                    cout << "stack is empty" << endl;
//                else
//                {
//                    st.pop(item);
//                    total += item.payment;
//                    cout << "total = " << total << endl;
//                }
//                break;
//        }
//
//        cout << "Please enter A to add an customer" << endl;
//        cout << "p to pop a customer, Q to quit." << endl;
//    }
//
//    cout << "Bye!" << endl;
//
//    return 0;
//}



//////6.补增对封装的调用方法
//int main()
//{
//    MOVE move1 = {2.2,3.3};
//    MOVE move2;
//    move1.showmove();
//    move2.showmove();
//    move2.reset(-4.5,3.6);
//    move2.showmove();
//    move2 = move2.add(move1);
//    move2.showmove();
//    move2.Setx(-7.2); //为了保护数据
//    move2.showmove();
//}





//////7.
//int main()
//{
//    Plog plog1;
//    plog1.show();
//    char name[12] = "askjfl";
//    plog1.SetPlog(name,50);
//    plog1.show();
//    plog1.SetCi(10);
//    plog1.show();
//}




////8.类调用函数方法
void add(Item & item);
int main()
{
    list list1;
    Item item1 {"askdfj",10};
    list1.additem(item1);
    list1.show();
    cout << list1.itemcount() <<"\t";
    cout << list1.isempty() << "\t";
    cout << list1.isfull() << endl;
    list1.visit(add);
    list1.show();
    list1.additem(item1);
    list1.show();
    cout<< "**************"<<endl;
    list1.additem(item1);
    list1.additem(item1);
    list1.additem(item1);
    list1.additem(item1);
    list1.additem(item1);
    list1.additem(item1);
    list1.additem(item1);
    list1.additem(item1);
    list1.additem(item1);
    list1.show();
}
void add(Item & item)
{
    item.age += 10;
}



