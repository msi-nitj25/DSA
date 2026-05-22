#include<iostream>
using namespace std;
int main()
{
  int a;
  bool flag=0;
  cout<<"Enter the number: ";
  cin>>a;
  for (int i=0;i<a;i++)
  {
      if (a==2<<i)
      {
      flag=1;
      break;
      }
     
  }
 if (flag==1)
 {
     cout<<"True";
 }
 else 
 {
     cout<<"False";
 }
 return 0;
}