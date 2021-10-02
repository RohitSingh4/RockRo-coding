#include<iostream>
namespace a
{
int add (int a,int b)
{
std::cout<<"sum of numbers is :"<<"\n";
return a+b;
}
}
namespace b
{
float add{float a,float b}
{
std::cout<<"sum of numbers is :"<<"\n";
return a+b;
}
}
int main()
{
float x,y;
std::cin>>x;
std::cin>>y;
std::cout<<a::add(x,y);
std::cout<<b::add(x,y);
return 0;
}
