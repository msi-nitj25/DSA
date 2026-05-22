// same as sets but it allows duplicate elements
#include<bits/stdc++.h>
using namespace std;
void expalinMultiSet(){
    multiset<int>ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert({1,1,2,2,3,3,4,4,5,5,6,7,8,9});
    for (auto i:ms){
        cout<<i<<" ";
    } cout<<endl;

    ms.erase(1);  // removes all the occurrences of 1 from the multiset
    for (auto i:ms){
        cout<<i<<" ";
    } cout<<endl;

    ms.erase(ms.find(2));  // removes only one occurrence of 2 from the multiset
    for (auto i:ms){
        cout<<i<<" ";
    } cout<<endl;

    ms.erase(ms.find(3),ms.find(5));  // removes the elements from first occurance of 3 to number before first occurance of 5
     for (auto i:ms){
        cout<<i<<" ";
    } cout<<endl;
    
    

    return ;
}
int main(){
    expalinMultiSet();   // call the function here
    return 0;
}