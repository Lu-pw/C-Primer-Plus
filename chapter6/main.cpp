#include <iostream>
#include <cctype>
#include <array>
#include <fstream>
#include <unistd.h>
#include <stdio.h>
using namespace std;

//int main()
//{
//    char ch;
//    int ct1,ct2;
//    ct1 = ct2 = 0;
//    while((ch = cin.get() != '$'))
//    {
//        cout << ch;
//        ct1 ++;
//        if(ch = '$')
//            ct2++;
//        cout << ch;
//    }
//    cout << "ct1 = " << ct1 << ",ct2 = " << ct2 << "\n";
//}


//int main()
//{
//    char ch;
//    ch = '$';
//    cout << ch;
//    ch = cin.get();
//    cout << ch;
//}


////1.
//int main()
//{
//    char word[100];
//    int i = 0;
//    char ch;
//    while(cin >> ch)
//    {
//
//        if(ch == '@')
//        {
//            break;
//        }
//        if(ch >= '1' && ch <= '9')
//            continue;
//        else if(ch >= 'a' && ch <= 'z')
//        {
//            ch = ch - 32;
//            word[i] = ch;
//            i++;
//        }
//        else if(ch >= 'A' && ch <= 'Z')
//        {
//            ch = ch + 32;
//            word[i] = ch;
//            i++;
//        }else{
//            word[i] = ch;
//            i++;
//        }
//        cout << ch << endl;
//    }
//}


////2.
//int main()
//{
//    array<double,10> nums;
//    int i = 0;
//    double num;
//    while(cin >> num)
//    {
//        if(num >= 1 && num <= 9)
//        {
//            nums[i] = num;
//            i++;
//        }else{break;};
//    }
//    int j;
//    double aver = 0;
//    for(j = 0;j<i;j++)
//    {
//        aver += nums[j]/5;
//    }
//    cout << aver << endl;
//    for(j = 0;j<i;j++)
//    {
//        if(nums[j] > aver)
//        {
//            cout << nums[j] << "\t";
//        }
//    }
//}


////3.
//int main()
//{
//    cout << "please enter one of the following choice: " << endl;
//    cout <<"c) carnivore \t p) pianist \nt)tree \t\t g)game \n";
//    char ch;
//    while(cin >> ch)
//    {
//        switch(ch)
//        {
//            case 'c':break;
//            case 'p':break;
//            case 't':
//                cout << "a maple is a tree";
//                break;
//            case 'g':break;
//            default:
//                cout << "please enter a c,t,or g:";
//                continue;
//        }
//    }
//}



////4.
//void display_name();
//void display_preference();
//struct bop
//    {
//        char fullname[100];
//        char title[10];
//        char bopname[10];
//        int preference;
//    };
//bop T_bop[2]
//    {
//
//        {"bob",
//        "student",
//        "lisa",
//        2},
//        {
//            "lara",
//            "science",
//            "programer",
//            1
//        }
//    };
//int main()
//{
//    cout << "a. display by name \t b.display by title \nc.display by bopname \t d.display by preference\nq.quit \n";
//    char ch;
//    while(cin >> ch)
//    {
//        if(ch == 'q')
//        {
//            break;
//        }
//        switch(ch)
//        {
//            case 'a':
//                display_name();
//                break;
//            case 'b':
//                cout << T_bop[0].title << endl;
//                break;
//            case 'c':
//                cout << T_bop[0].bopname << endl;
//                break;
//            case 'd':
//                display_preference();
//                break;
//        }
//    }
//
//}
//void display_name()
//{
//    for(int i=0;i<2;i++)
//    {
//        cout << T_bop[i].fullname << "\t";
//    }
//}
//void display_preference()
//{
//    for(int i  = 0;i < 2;i++)
//    {
//        if(T_bop[i].preference == 0)
//        {
//            cout << T_bop[i].fullname << "\t";
//        }
//        else if(T_bop[i].preference == 1)
//        {
//            cout << T_bop[i].title << "\t";
//        }
//        else if(T_bop[i].preference == 2)
//        {
//            cout << T_bop[i].bopname << "\t";
//        }
//    }
//}


//int main()
//{
//    cout << "enter your salary: ";
//    double salary;
//    double tax = 0;
//    while(cin >> salary)
//    {
//        if(isdigit(salary))
//        {
//            break;
//        }
//        if(salary <0)
//        {
//            break;
//        }
//        else if(salary < 5000)
//        {
//            continue;
//        }else if(salary <15000)
//        {
//            tax = (salary - 5000)*0.1;
//        }
//        else if(salary < 35000)
//        {
//            tax = (salary - 15000)*0.15+10000*0.1;
//        }
//        else
//        {
//            tax = (salary - 35000) * 0.2 + 20000*0.15 +10000*0.1;
//        }
//        cout << "tax: " << tax << endl;
//        cout << "enter your salary: ";
//    };
//
//}



////6.
//struct donation
//{
//    string name;
//    double money;
//};
//int main()
//{
//    cout <<"enter the nums of donator: ";
//    int nums;
//    cin >> nums;
//    cin.get();
//    donation *p = new donation[nums];
//    for(int i=0;i<nums;i++)
//    {
//        cout << "enter the name: ";
//        getline(cin,p[i].name);
//        cout << "enter the money: ";
//        cin >> p[i].money;
//        cin.get();
//        cout <<"\n";
//    }
//    int temp = 0;
//
//    for(int i=0;i<nums;i++)
//    {
//        if(p[i].money >1000)
//        {
//            cout << "Grand donatores: ";
//            cout << p[i].name << "\t" << p[i].money << endl;
//            temp++;
//        }
//    }
//    if(temp == 0)
//    {
//        cout << "none." << endl;
//    }
//    temp = 0;
//
//    for(int i=0;i<nums;i++)
//    {
//        if(p[i].money <= 1000)
//        {
//            cout << "other donatores: ";
//            cout << p[i].name << "\t" << p[i].money << endl;
//            temp ++;
//        }
//    }
//    if(temp == 0)
//    {
//        cout << "none." << endl;
//    }
//}



////7.
//// practice 7
//int main()
//{
//    unsigned int vowels = 0;
//    unsigned int consonants = 0;
//    unsigned int others = 0;
//    string input;
//
//    cout << "Enter words (q to quit): " << endl;
//
//    while ((cin >> input))
//    {
//        if (input.length() == 1 && input[0] == 'q')//单独一个q才退出
//        {
//            break;
//        }
//
//        if (isalpha(input[0]))
//        {
//            if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u')
//            {
//                vowels++;
//            }
//            else
//                consonants++;
//        }
//        else
//            others++;
//    }
//
//    cout << vowels << " words beginning with vowels" << endl;
//    cout << consonants << " words beginning with consonants" << endl;
//    cout << others << " otners" << endl;
//}


////8.文件的读取
//int main()
//{
//    string file_name;
//    ifstream inFile;
//    unsigned int num = 0;
//    char ch = 0;
//
//    cout << "enter the name of file: ";
//    getline(cin,file_name);
//
//    inFile.open(file_name.c_str());
//
//    while((ch = inFile.get()) != EOF)
//    {
//        num++;
//    }
//    cout << num;
//}



////文件的操作
//#define test_file "hello.txt"
//int main()
//{
//    if(0 == access(test_file,F_OK))//判断文件是否存在
//    {
//        FILE *fp = fopen(test_file,"r");
//        if(fp)
//            {
//                char txt[3] = {};
//                if(fgets(txt,3,fp))
//                {
//                    cout << "get-txt: " << txt << endl;
//                }
//                fclose(fp);
//            }
//            else{
//                cout << "open: " << test_file << "failed!!!\n" ;
//            }
//
//
//
//        ifstream infile(test_file,ios::binary);
//        if(infile)
//        {
//            infile.seekg(0,infile.end);
//            int len = infile.tellg();
//            infile.seekg(0,infile.beg);
//            char *buffer = new char[len];
//            infile.read(buffer,len);
//
//            cout << buffer;
//            infile.close();
//            delete[] buffer;
//
//        }
//        else{
//            cout << "open failed: " << test_file <<endl;
//        }
//    }
//    else{
//        cout << test_file <<" is nonexistent!!!\n" ;
//    }
//}



//9.
////#define prac_file "hello.txt"
//int main()
//{
////    if(0 == access(prac_file,F_OK))
////    {
////        string prac_file;
////        getline(cin,prac_file);
////        ifstream inFile;
////        inFile.open(prac_file.c_str());
////
////        int i =0;
////        int j = 0;
////        char ch;
////        char words[i][j];
////
////        ifstream infile(prac_file,ios::binary);
////        if(infile)
////        {
////            infile.seekg(0,infile.end);
////            int len = infile.tellg();
////            infile.seekg(0,infile.beg);
//////            cout <<len;
////            char *buffer = new char[len];
////
////            infile.read(buffer,len);
////
////            cout << buffer;
////            infile.close();
////            delete[] buffer;
////
////        }
//
////             {
////                  if(ch != '\n')
////                {
////                    words[i][j] = ch;
////                    j++;
////                }
////                else{
////                    i++;
////                    j = 0;
////                    words[i][j] = ch;
////                }
////              }
////        for (int i=0;i<6;i++)
////        {
////            cout << words[i] << "\t";
////        }
//
////    }
//}



///
#define file_name "practice.txt"
struct par_info
{
    string name;
    double amount;
};
int main()
{
    unsigned int contributors = 0;
//    unsigned int tmp = 0;
//    string FileName;
//    ifstream inFile;
//
//    cout << "Enter the file name: ";
//    getline(cin,FileName);
//    inFile.open(FileName.c_str());
//    inFile >> contributors;
//    inFile.get();
    ifstream inFile;
    inFile.open(file_name);
    inFile >> contributors;
    inFile.get();
//    cout << contributors;//已经读入了4

    struct par_info *pContributors = new struct par_info[contributors];

    for (size_t i = 0;i<contributors;i++)
    {
//        cout << "enter the name of" << i+1 << "contributor: ";
        getline(inFile,pContributors[i].name);

//        cout << "enter the amount of donation: ";
        inFile >> pContributors[i].amount;
        inFile.get();
    }
    for(int i = 0; i<contributors;i++)
    {
        cout << pContributors[i].name << "\t" << pContributors[i].amount << endl;
    }
}
