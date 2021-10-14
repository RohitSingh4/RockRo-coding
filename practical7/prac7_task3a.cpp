#include<iostream>
using namespace std;
int main()
{ int a,b;
  cout<<"enter matrix size"<<endl;
  cin>>a;
  cin>>b;
  int arr[a][b],i,j;
  for(i=0; i<3; i++)
{
   for(j=0; j<3; j++)
 {
     cout<<"enter array matrix numbers :";
     cin>>arr[i][j];
 }
}
 for(i=2; i>=0; i--)
{
  for(j=2; j>=0; j--)
 {
  cout<<arr[i][j]<<"\t";
 }
  cout<<endl;
}
 return 0;
}
