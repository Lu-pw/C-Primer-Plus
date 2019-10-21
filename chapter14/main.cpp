#include <iostream>
#include "winec.h"
#include "wine2.h"
#include "queueTp.h"
#include "worker.h"
#include "Person.h"
#include "emp.h"

using namespace std;



////////1.
//int main()
//{
//    cout << "enter name of wine: " ;
//    char lab[50];
//    cin.getline(lab,50);
//    cout << "enter number of years: ";
//    int yrs;
//    cin >> yrs;
//
//    Wine holding(lab,yrs);
//    holding.GetBottles();
//    holding.Show();
//
//    const int YRS = 3;
//    int y[YRS] = {1993,1995,1998};
//    int b[YRS] = {48,60,72};
//    //创建一个新对象，解析数组y和b中的数据
//    Wine more("gushing grape red",YRS,y,b);
//    more.Show();
//    cout <<"total bottles for" << more.Label()
//    << ": " << more.sum() << endl;
//
//}






///////////2.
//int main()
//{
//    cout << "enter name of wine: " ;
//    char lab[50];
//    cin.getline(lab,50);
//    cout << "enter number of years: ";
//    int yrs;
//    cin >> yrs;
//
//    Wine holding(lab,yrs);
//    holding.GetBottles();
//    holding.Show();
//
//    const int YRS = 3;
//    int y[YRS] = {1993,1995,1998};
//    int b[YRS] = {48,60,72};
//    //创建一个新对象，解析数组y和b中的数据
//    Wine more("gushing grape red",YRS,y,b);
//    more.Show();
//    cout <<"total bottles for" << more.Label()
//    << ": " << more.sum() << endl;
//
//}





///////3.队列的使用，模板类的应用
//int main()
//{
//    queueTp<worker> q(3);
//
//    if(q.isempty())
//        cout << "Queue is empty" << endl;
//
//    cout << "add worker1 to queue..." << endl;
//    worker w1("shao", 1);
//    q.enqueue(w1);
//
//    cout << "add worker2 to queue..." << endl;
//    worker w2("zheng", 2);
//    q.enqueue(w2);
//
//    cout << "add worker3 to queue..." << endl;
//    worker w3("jiang", 3);
//    q.enqueue(w3);
//
//    if(q.isfull())
//        cout << "queue is full" << endl;
//
//    worker w;
//    cout << "delete worker1..." << endl;
//    q.dequeue(w);
//    w.show();
//
//}






////////////4.
//int main()
//{
////    Person p1("singer");
////    p1.show();
////    cout << endl;
////
////    Gunslinger g1(p1,2.0,3);
////    g1.show();
//
//    int ct, i;
//    const int SIZE = 5;
//    Person * gang[SIZE];
//
//    for(ct = 0; ct < SIZE; ct++)
//    {
//        char choice;
//        cout << "Enter the gang category: \n"
//             << "o: ordinary person  g: gunslinger  "
//             << "p: pokerplayer  b: bad dude  q: quit \n";
//        cin >> choice;
//        while(strchr("ogpbq", choice) == NULL)
//        {
//            cout << "Please enter an o, g, p, b, or q: ";
//            cin >> choice;
//        }
//
//        if (choice == 'q')
//            break;
//
//        switch(choice)
//        {
//        case 'o':
//            gang[ct] = new Person;
//            break;
//        case 'g':
//            gang[ct] = new Gunslinger;
//            break;
//        case 'p':
//            gang[ct] = new PokerPlayer;
//            break;
//        case 'b':
//            gang[ct] = new BadDude;
//            break;
//        }
//
//        cin.get();
//        gang[ct]->Set();
//    }
//
//    cout << "\nHere is your gang: \n";
//    for (i = 0; i < ct; i++)
//    {
//        cout << endl;
//        gang[i]->show();
//    }
//    Gunslinger gang1(*gang[0],2.0,3);
//    gang1.Set();
//    gang1.show();
//    for (i = 0; i < ct; i++)
//        delete gang[i];
//    cout << "Bye" << endl;
//
//    return 0;
//}







//////////5.
int main()
{
    employee em("Trip","Harris","Thumper");
    cout << em;
    em.showAll();
    cout << endl;
    manager ma("Amorphia","Spindragon","Nuancer",5);
    cout << ma ;
    ma.showAll();
    cout << endl;


    fink fi("Matt","Oggs","Oiler","Juno Barr");
    cout << fi << endl;
    fi.showAll();
    highfink hf(ma,"Curly Kew");
    hf.showAll();
    cout << "press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.setALL();

    cout << "Using an emp * pointer:\n";
    emp * tri[4] = {&em,&fi,&hf,&hf2};
    for(int i = 0; i < 4; i++)
    {
        tri[i]->showAll();
    }

}
