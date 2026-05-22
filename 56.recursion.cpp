#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
int fact=1;
    while( n>0) // base case is when n is 0 or 1, factorial is 1
    {
       fact=fact*n;
       n=n-1;
       factorial(n);
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number to find factorial: ";
    cin>>n;
    factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}