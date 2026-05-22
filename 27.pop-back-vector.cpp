#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>msi={25,35,45};
    cout<<"size:"<<msi.size()<<endl;
    for (int val:msi)
    cout<<val<<endl;
    
    msi.pop_back();
    cout<<"size after pop-back:"<<msi.size()<<endl;
    for (int val:msi)
    cout<<val<<endl;
   
   return 0;
}