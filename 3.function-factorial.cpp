#include <iostream>
using namespace std;
int factorial(int n)
{
    int s=1;
    for (int i=1;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}
int main() {;
   int a;
   cout<<"enter n :";
   cin>>a;
   
   cout<<factorial(a);
    return 0;
}