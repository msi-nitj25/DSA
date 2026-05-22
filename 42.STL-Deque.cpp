#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
deque<int>l;

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
    explainDeque();   // call the function here
    return 0;
}
/* list and deque are similar in that they both allow for efficient insertion and deletion at both ends of the container.
However, a list is implemented as a doubly linked list, while a deque is implemented as a dynamic array of fixed-size arrays (blocks).
This means that a deque provides better cache locality and random access compared to a list,
but may have slightly higher overhead for insertions and deletions compared to a list.
A deque is useful when you need efficient access to both ends of the container and also require random access,
while a list is more suitable when you need frequent insertions and deletions without the need for random access.  */
