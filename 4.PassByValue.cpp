#include <iostream>    // primitive data types are passed by value
using namespace std;
int sum(int a,int b)
{
    a=a+10;
    b=b+10;
    
    return a+b;
}
int main() {;
   int a=5 , b=4;
   
   cout<<"pass by value:"<<sum(a,b)<<endl;
   
   cout<<"main sum:"<<(a+b);
    return 0;
}