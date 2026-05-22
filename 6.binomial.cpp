#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
   for (int i=n;i>0;i--)
   {
       fact*=i;
   }
   return fact;
}
int binomial(int n,int r)
{
    int res=factorial (n)/(factorial(r)*factorial(n-r));
    return res;
}
int main() {;
   int n,r;
   cout<<"Enter n: ";
   cin>>n;
   cout<<"Enter r: ";
   cin>>r;
   cout<<"binomial: "<<binomial(n,r);
    return 0;
}