#include<bits/stdc++.h>
using namespace std;
void num_bt(int i,int n){
    if (i>n) return; // base case to prevent infinite recursion and stack overflow
    cout<<i<<" ";
    num_bt(i+1,n); // recursive call to the next number
    cout<<i<<" "; // backtracking step to print the number again after returning from the recursive call
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    num_bt(1,n);
    cout<<endl;
}