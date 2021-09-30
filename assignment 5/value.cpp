#include<iostream>
using namespace std;
void char_v(char s)
{
cout<<"value of char\n"<<s;
}
void int_v(int s)
{
cout<<"\nvalue of int\n"<<s;
}
void short_v(short s)
{
cout<<"\nvalue of short\n"<<s;
}
void long_v(long s)
{
cout<<"\nvalue of long\n"<<s;
}
void float_v(float s)
{
cout<<"\nvalue of float\n"<<s;
}
void double_v(double s)
{
cout<<"\nvalue of double\n"<<s;
}
void longdouble_v(long double s)
{
cout<<"\nvalue of long double\n"<<s;
}
void wide_char( wchar_t s)
{
cout<<"\nvalue of wide char\n"<<s;
}
int main()
{
 char_v('R');
 int_v(5);
 short_v(1);
 long_v(3223232332);
 float_v(3.3);
 double_v(66.3);
 longdouble_v(445454454.22);
 wide_char('R');
 return 0;
}
