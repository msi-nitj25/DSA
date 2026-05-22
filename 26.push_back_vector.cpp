#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>empty;
    empty.push_back(25);
    cout<<"size after push-back:"<<empty.size()<<endl;
    for (int val:empty)
    cout<<val<<endl;
    
    empty.push_back(35);
    cout<<"size after push-back:"<<empty.size()<<endl;
    for (int val:empty)
    cout<<val<<endl;
    
    empty.push_back(45);
    cout<<"size after push-back:"<<empty.size()<<endl;
    for (int val:empty)
    cout<<val<<endl;
    
   return 0;
}