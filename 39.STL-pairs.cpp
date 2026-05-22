#include<bits/stdc++.h>
using namespace std;

void explainPair(){

pair<int,int>p={1,2};
cout<<p.first<<" "<<p.second<<endl;

pair<int ,pair <int,int>>P={1,{2,3}};
cout<<P.first<<" "<<P.second.first<<" "<<P.second.second<<endl;

pair<int,int>arr[]={{1,2},{3,4},{5,6}};
cout<<arr[1].second<<endl;
    return ;
}

int main(){
    explainPair();   // call the function here
    return 0;
}