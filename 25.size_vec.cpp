#include <iostream>
#include<vector>
using namespace std;

int main(){
vector<char>alpha={'a','b','c','d','e','f'};
   for (char val:alpha){
   cout<<val<<endl;
   }
   cout<<"size:"<<alpha.size()<<endl;
   return 0;
}