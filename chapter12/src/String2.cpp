/*作者：lu
  日期：
  版权：
*/ #include "String2.h"
int String2::num_strings = 0;
int String2::HowMany()
{
    return num_strings;
};
String2::String2()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
};
String2::String2(const char *s)
{
    len = strlen(s);
    str = new char[len+1];
    strcpy(str,s);
    num_strings++;
}
String2::String2(const String2 &st)
{
    num_strings++;
    len = st.len;
    str = new char[len+1];
    strcpy(str,st.str);
}

void String2::Stringlow()
{
    for(int i = 0; i<len; ++i)
    {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

}
void String2::Stringup()
{
    for(int i = 0; i<len; ++i)
    {
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
}

int String2::has(char ch) const
{
    int sum,i;
    for(sum = i =0; i<len; ++i)
    {
        if(str[i] == ch)
            sum++;
    }
    return sum;
}


String2 & String2::operator = (const String2 &st)
{
    if(this == &st)
    {
        return *this;
    }
    delete [] str;
    len = st.len;
    str = new char[len+1];
    strcpy(str,st.str);
    return *this;
}
String2 & String2::operator = (const char *s)
{
    delete [] str;
    len = strlen(s);
    str = new char [len+1];
    strcpy(str,s);
    return *this;
}
char & String2::operator [](int i)
{
    return str[i];
}
const char & String2::operator[](int i) const
{
    return str[i];
}

String2::~String2()                     // necessary destructor
{
    --num_strings;                    // required
    delete [] str;                    // required
}


bool operator<(const String2 & st,const String2 & st2)
{
    cout << "run <: ";
    return (strcmp(st.str,st2.str)<0);
}
bool operator<=(const String2 & st,const String2 & st2)
{
    return (strcmp(st.str,st2.str)<= 0);
}
bool operator>(const String2 & st,const String2 & st2)
{
    return st2 < st;
}
bool operator>=(const String2 & st,const String2 & st2)
{
    return st2 <= st;
}
bool operator==(const String2 & st,const String2 & st2)
{
    return (strcmp(st.str,st2.str) == 0);
}
ostream & operator << (ostream & os,const String2 & st)
{
    os << st.str;
    return os;
}
istream & operator >>(istream & is,const String2 & st)
{
    is >> st.str;
    return is;
}
String2 String2::operator +(const String2 & s) const
{
    cout <<"run string2 &s : ";
    int len = strlen(str) + strlen(s.str);
    char *str_sum = new char[len+1];
    strcpy(str_sum,str);
    strcat(str_sum,s.str);
    String2 tr_new = str_sum;
    delete [] str_sum;
    return tr_new;
}

String2 String2::operator+(const char * s) const
{
    cout <<"run char *s: ";
    String2 temp = s;
    String2 sum = *this + temp;
    return sum;
//    int len = strlen(str) + strlen(s);
//    char *str_sum = new char[len+1];
//    strcpy(str_sum,str);
//    strcat(str_sum,s);
//    String2 tr_new = str_sum;
//    delete [] str_sum;
//    return tr_new;
}
String2 operator+(const char *st1,const String2 & st2)
{
    cout <<"run st1 + st2: ";
    return (st2+st1);
}


