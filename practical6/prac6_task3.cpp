#include<iostream>
#include<string>
using namespace std;
int main()
{
 string str1;
 cout<<"\nenter a string"<<endl;
 getline(cin,str1);
 string rev="";
 for(int i=str1.size()-1; i>=0; i--)
  {
   rev=rev+str1[i];
  }
 cout<<"reverse of the string\n"<<endl;
 cout<<rev;
 return 0;
}
