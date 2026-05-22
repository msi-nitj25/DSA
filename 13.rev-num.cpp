#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  int rev=0;
  while(a!=0)
  {
      
    int rem=a%10;
    rev=rev*10+rem;
    a=a/10;
  }
  
  cout<<"Reveresd:"<<rev;
    return 0;
}