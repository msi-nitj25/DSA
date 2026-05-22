// FIFO -- First In is First Out
#include<bits/stdc++.h>
using namespace std;
void explainQueue(){
    queue<int>q;
    q.push(1); 
    q.push(2);
    q.emplace(3);
    q.emplace(4);
    cout<<q.front()<<endl;  // gives the front element of the queue . q[0] is invalid for queue
    cout<<q.back()<<endl;  // gives the back element of the queue
    q.pop();  // removes the front element of the queue
    cout<<q.front()<<endl;  // gives the new front element of the queue
    cout<<q.size()<<endl;  // gives the size of the queue
    cout<<q.empty()<<endl;  //returns 1 if queue is empty, else 0

    queue<int>q1,q2;
    q1.push(10);
    q1.push(20);
    q2.push(100);
    q2.push(200);
    q1.swap(q2);  // swaps the contents of q1 and q2
    cout<<q1.front()<<endl;  // gives the front element of q1 after swapping
    cout<<q2.front()<<endl;  // gives the front element of q2 after swapping

}
int main(){
    explainQueue();   // call the function here
    return 0;
}