#include<bits/stdc++.h>
using namespace std;
void explainPriorityQueue(){
    /* By default, the priority queue in C++ is a max-heap,
    which means that the largest element has the highest priority and will be at the top of the queue. */

    priority_queue<int>pq;
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(4);
    cout<<pq.top()<<endl;  // gives the top element of the priority queue
    pq.pop();  // removes the top element of the priority queue
    cout<<pq.top()<<endl;  // gives the new top element of the priority queue
    cout<<pq.size()<<endl;  // gives the size of the priority queue
    cout<<pq.empty()<<endl;  //returns 1 if priority queue is empty, else 0

    // To create a min-heap, we can use a custom comparator or use the greater<int> comparator provided by C++.
    priority_queue<int, vector<int>, greater<int>>minPQ;
    minPQ.push(1);
    minPQ.push(5);
    minPQ.push(3);
    minPQ.push(4);
    cout<<minPQ.top()<<endl;  // gives the top element of the min-heap (smallest element)
}
int main(){
    explainPriorityQueue();   // call the function here
    return 0;
}
