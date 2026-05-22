#include <iostream>
#include<cmath>
using namespace std;
int decimal(int n)
{
    int i=0;
    int dec=0;
   while (n>0)
   {
   int a=0;
   a=n%10;
   dec=dec+a*pow(2,i);
   n=n/10;
   i++;
   
   }
   return dec;
}

int main() {
   int n;
   cout<<"Enter binary num:";
   cin>>n;
   cout<<"decimal:"<<decimal(n);
   
    return 0;
}
