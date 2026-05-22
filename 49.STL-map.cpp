// have keys and values. keys are unique and sorted in ascending order.values can be duplicate.
// keys data type can be any types and so as values . <key, Value> 
// keys are sorted using ASCII values of the keys.

#include<bits/stdc++.h>
using namespace std;
void explainMap(){
    map<int,int>mpp;
    map<pair<int,int>,int>mpp2;
    mpp[1]=2;  // insert a key-value pair in the map
    mpp.emplace(3,4);  // insert a key-value pair in the map
    mpp.insert({2,5});  // insert a key-value pair in the map
    mpp2[{2,3}]=10;  // insert a key-value pair in the map where key is a pair and value is an integer
    for (auto i:mpp){
        cout<<i.first<<" "<<i.second<<endl;
    } cout<<endl;

    for(auto i:mpp2){
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }

    cout<<mpp[2]<<endl;  // gives the value of the key 1

    auto it=mpp.find(3);  // returns an iterator to the element if found, else returns mpp.end()
    if(it==mpp.end()){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<it->second<<endl;
    }

    auto it2=mpp.find(8);  // returns mpp.end() since key 8 is not present in the map. it points after the last element of the map
    if(it2==mpp.end()){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<it2->first<<" "<<it2->second<<endl;
    }

    auto it3=mpp.lower_bound(0);  // returns an iterator to the first element that is not less than 0 (i.e., greater than or equal to 0)
    cout<<it3->first<<" "<<it3->second<<endl;

    auto it4=mpp.upper_bound(2);  // returns an iterator to the first element that is greater than 2
    cout<<it4->first<<" "<<it4->second<<endl;
    
    
    return ;
} 
int main(){
    explainMap();   // call the function here
    return 0;
}