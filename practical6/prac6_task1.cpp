#include<iostream>
using namespace std; 
int add(int a, int b)
{
 return(a+b);
}
float add(float r, float s)
{
  return(r+s);
                                                                                                                                                                                            
}
int main()
{
 int x, y;
float r,s;
string str1;
string str2;
cin>>str1;
cin>>str2;
cin>>x;
cin>>y;
cin>>r;
cin>>s;
cout<<"addtion is :"<<add(x,y)<<endl;
cout<<"addtion is :"<<add(r,s)<<endl;
cout<<"addtion is :"<<(str1+str2)<<endl;
}
