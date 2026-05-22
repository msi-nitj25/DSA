#include<iostream>
using namespace std;
int sum(int a)
{
    int rem=0;
    while(a>0)
    {
        rem=rem+a%10;
        a=a/10;
    }
    return rem;
    
}
int main()
{
    int a;
    cout<< "enter a number:";
    cin>>a;
    cout<<"sum of digits :"<<sum(a);
    return 0;
}