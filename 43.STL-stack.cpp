// LIFO -- Last In is First Out
#include<bits/stdc++.h>
using namespace std;
void explainStack(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    st.emplace(4);
    cout<<st.top()<<endl;  // gives the top element of the stack . st[0] is invalid for stack
    st.pop();  // removes the top element of the stack
    cout<<st.top()<<endl;  // gives the new top element of the stack
    cout<<st.size()<<endl;  // gives the size of the stack
    cout<<st.empty()<<endl;  //returns 1 if stack is empty, else 0

    stack<int>st1,st2;
    st1.push(10);
    st1.push(20);
    st2.push(100);
    st2.push(200);
    st1.swap(st2);  // swaps the contents of st1 and st2
    cout<<st1.top()<<endl;  // gives the top element of st1 after swapping
    cout<<st2.top()<<endl;  // gives the top element of st2 after swapping

}

int main(){
    explainStack();   // call the function here
    return 0;
}