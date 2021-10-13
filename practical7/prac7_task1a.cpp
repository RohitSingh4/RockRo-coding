#include<iostream>
using namespace std;
int main()
{
 int str;
 cout<<"Enter your choice"<< endl;
 cin>>str;
 switch(str)
 {
    case 1:
    {
    cout<<"year is 2021"<<endl;
    break;
    }
    case 2:
    {
    cout<<"month=october"<<endl;
    break;
    }
    case 3:
    {
    cout<<"13/10/2021"<<endl;
    break; 
    } 
    default:
    {
    cout<<"invalid choice"<<endl;
    break;
    }
 }
return 0;

}
