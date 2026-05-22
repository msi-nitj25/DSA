#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int s=a+b;
    return s;
}
int main() {;
   int a,b;
   cout<<"enter a :";
   cin>>a;
   cout<<"enter b :";
   cin>>b;
   cout<<sum(a,b);
    return 0;
}