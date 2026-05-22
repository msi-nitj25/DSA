#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>msi={25,35,45};
    cout<<"size:"<<msi.size()<<endl;
    for (int val:msi)
    cout<<val<<endl;
    
   
    cout<<"front value :"<<msi.front()<<endl;
    cout<<"back value :"<<msi.back()<<endl;
    cout<<"at index (i=1) value :"<<msi.at(1)<<endl;
   
   return 0;
}