/*���ߣ�lu
  ���ڣ�
  ��Ȩ��
*/ #include "worker.h"


void worker::set()
{
    cout << "enter the fullname: " ;
    getline(cin,fullname);
    cout << "enter the worker'id: ";
    cin >> id;
    while(cin.get() != '\n')
        continue;
}
void worker::show()
{
    cout << "fullname: " << fullname << "\tid: " <<id <<endl;
}
