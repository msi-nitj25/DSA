#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"AND :"<<(a&b)<<endl;
    cout<<"OR :"<<(a|b)<<endl;
    cout<<"XOR :"<<(a^b)<<endl;
    cout<<"NOT :"<<(~a)<<endl;
    cout<<"left shift :"<<(a<<1)<<endl;
    cout<<"right shift :"<<(a>>1)<<endl;
    return 0;
}