#include<bits/stdc++.h>
using namespace std;
void name(int n){
    if (n>5) return; // base case to prevent infinite recursion and stack overflow
    cout<<"MSI"<<" ";
    n++;
    name(n);
}
void num_10(int x,int n){
    if (x>n) return; // base case to prevent infinite recursion and stack overflow
    cout<<x<<" ";
    x++;
    num_10(x,n); 
}
void num_10_back(int n){
    if (n<1) return; // base case to prevent infinite recursion and stack overflow
    cout<<n<<" ";
    n--;
    num_10_back(n);
}
int main(){
    name(1);
    cout<<endl;
    num_10(1,19);
    cout<<endl;
    num_10_back(19);
    cout<<endl;
    return 0;
}