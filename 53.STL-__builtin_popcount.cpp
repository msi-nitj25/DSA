#include<bits/stdc++.h>
using namespace std;
void popcount(){

    int num; // 7 --> 0111
    cout<<"Enter a number: ";
    cin>>num;
    int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;  // 3

    long long num2;
    cout<<"Enter a long long number: ";
    cin>>num2;
    int cnt2=__builtin_popcountll(num2);
    cout<<cnt2<<endl;

    }

int main(){
    popcount();
    return 0;
}