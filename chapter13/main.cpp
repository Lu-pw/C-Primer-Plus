#include <iostream>
#include "classic.h"
#include "classic2.h"
#include "dma.h"
#include "Port.h"

using namespace std;


///////1.
//void Bravo(const Cd & disk);
//int main()
//{
//    Cd c1("Beatles","Capitol",14,35.5);
//    classic c2 = classic("Piano Sonata in B flat, Fantasia in C",
//                         "Alfred Brendel","Philips",2,57.17);//释放时先释放classic再释放Cd
//
//
//    Cd * pcd = &c1;
//
//    cout << "using object directly:\n";
//    c1.Report();
//    c2.Report();
//    cout << endl;
//
//    cout << "using type cd * pointer to objects:\n";
//    pcd -> Report();
//    pcd = &c2;
//    pcd -> Report();
//    cout << endl;
//
//    cout << "calling a function with a Cd reference argument:\n";
//    Bravo(c1);
//    Bravo(c2);
//    cout << endl;
//
//    cout << "testing assignment: \n";
//    classic copy;//释放时先释放classic再释放Cd
//    copy = c2;
//    copy.Report();
//
//}
//void Bravo(const Cd & disk)
//{
//    disk.Report();
//}






///////2.
//void Bravo(const Cd2 & disk);
//int main()
//{
//    Cd2 c1("Beatles","Capitol",14,35.5);
//    classic2 c2 = classic2("Piano Sonata in B flat, Fantasia in C",
//                         "Alfred Brendel","Philips",2,57.17);//释放时先释放classic再释放Cd
//
//
//    Cd2 * pcd = &c1;
//
//    cout << "using object directly:\n";
//    c1.Report();
//    c2.Report();
//    cout << endl;
//
//    cout << "using type cd2 * pointer to objects:\n";
//    pcd -> Report();
//    pcd = &c2;
//    pcd -> Report();
//    cout << endl;
//
//    cout << "calling a function with a Cd2 reference argument:\n";
//    Bravo(c1);
//    Bravo(c2);
//    cout << endl;
//
//    cout << "testing assignment: \n";
//    classic2 copy1;//释放时先释放classic再释放Cd
//    copy1 = c2;
//    copy1.Report();
//
//}
//void Bravo(const Cd2 & disk)
//{
//    disk.Report();
//}






/////////3.
//int main()
//{
//    ABC ab("abc",1);
//    ab.View();
//
//    dma d("dma",2);
//    d.View();
//
//    lacksdma ld("lacksdma","ld",3);
//    ld.View();
//
//    hasdma hd("hasdma","hd",4);
//    hd.View();
//
//    cout << endl;
//    cout << ab << endl;
//    cout << d <<endl;
//    cout <<ld <<endl;
//    cout << hd <<endl;
//
//    cout << endl;
//    ab = d;
//    cout << ab <<endl;
//    ab = ld;
//    cout << ab <<endl;
//
//    hasdma had;
//    had  = hd;
//    cout << had <<endl;
//}







//////4.
int main()
{
    Port pot = {"port","p_style",1};
    pot.Show();
    cout << pot<< endl;
    cout << endl;

    VintagePort vpot("v_port",2,"nickname",2);
    vpot.show();
    cout << vpot << endl;

    pot += 2;
    cout << pot << endl;
    cout << endl;

    Port pot1;
    pot1 = pot;
    cout << pot1 << endl;
    cout << endl;

    VintagePort vpot1;
    vpot1 = vpot;
    vpot1.show();
}
