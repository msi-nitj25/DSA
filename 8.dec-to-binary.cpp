#include <iostream>
#include<cmath>
using namespace std;
int binary(int n)
{
    int i=0;
    int bin=0;
   while (n>0)
   {
   int a=0;
   a=n%2;
   bin=bin+a*pow(10,i);
   n=n/2;
   i++;
   
   }
   return bin;
}

int main() {
   int n;
   cout<<"Enter decimal num:";
   cin>>n;
   cout<<"binary:"<<binary(n);
   
    return 0;
}