#include<bits/stdc++.h>
using namespace std;

void explainList(){
list<int>l;

l.push_back(1);
l.emplace_back(2);
for(auto i:l){
    cout<<i<<" ";
} cout<<endl;

l.push_front(3);
for(auto i:l){
    cout<<i<<" ";
} cout<<endl;

l.emplace_front(4);
for(auto i:l){
    cout<<i<<" ";
} cout<<endl;

l.insert(l.end(),{5,6,7});
for(auto i:l){
    cout<<i<<" ";
} cout<<endl;

    return ;
}

int main(){
    explainList();   // call the function here
    return 0;
}
/* in C++ is implemented as a doubly linked list, meaning each element stores pointers to both the previous and next elements.
Unlike vector, it does not store elements in contiguous memory and does not support random access (no indexing like l[2]).
It also has no capacity() function. However, insertion and deletion are efficient because elements do not need to be shifted.
A list is useful when frequent insertions and deletions are required and random access is not needed. */