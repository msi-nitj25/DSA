#include<bits/stdc++.h>
using namespace std;
void permutation(){
string s;
cout<<"Enter a string: ";
cin>>s;

    // arrange all permutations in ascending order , then print the next permutation of the given string
    do{
        cout<<s<<" ";
    } 
    while(next_permutation(s.begin(),s.end()));
     cout<<endl;

     // to print all the permutations 
     sort(s.begin(),s.end()); // sort the string in ascending order
    do{
        cout<<s<<" ";
    } 
    while(next_permutation(s.begin(),s.end()));
     cout<<endl;

    
}

int main(){
    permutation();
    return 0;
}