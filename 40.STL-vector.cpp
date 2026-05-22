#include<bits/stdc++.h>
using namespace std;

void explain_Vector(){

vector<int>v;
v.push_back(1);
v.emplace_back(2);
for (int val:v){
    cout<<val<<" ";
}
cout<<endl;

vector<pair<int,int>>vec;
vec.push_back({3,4});
vec.emplace_back(5,6);
for (auto val:vec){
    cout<<val.first<<" "<<val.second<<endl;
}

vector<int>v1={6,7,8,9,10,11,12,13,14,15};  // 5 elements with values 6,7,8,9,10
vector<int>v2(5);      // 5 elements with default value 0
vector<int>v3(5,20); // 5 elements with value 20
vector<int>v4(v3);  // copy constructor

vector<int>::iterator it=v1.begin();
it++;
cout<<*(it)<<" ";

it=it+2;
cout<<*(it)<<" ";

vector<int>::iterator it2=v1.end();
cout<<*(it2-1)<<endl;  // gives the last element of the vector

vector<int>:: reverse_iterator it3=v1.rend();
cout<<*(it3-1)<<endl;  // gives the first element of the vector

auto it4=v1.rbegin();
cout<<*(it4)<<" "<<*(it4+1)<<endl;  // gives the last and second last element of the vector

cout<<v1[0]<<" "<<v1.at(0)<<endl;  // both will give the same output
cout<<v1.back()<<endl;  // gives the last element of the vector

for (auto it=v1.begin(); it != v1.end(); it++){
    cout<<*it<<" ";
}
cout<<endl;

for(vector<int>::iterator it=v1.begin(); it != v1.end(); it++){
    cout<<*it<<" ";
}
cout<<endl;

for (auto val:v2){
    cout<<val<<" ";
}
cout<<endl;

for (auto val:v3){
    cout<<val<<" ";
}
cout<<endl;

for (auto val:v4){
    cout<<val<<" ";
}
cout<<endl;

// deletion in vector
v1.erase(v1.begin()+2);  // deletes the element at index 2
for (auto val:v1){
    cout<<val<<" ";
}
cout<<endl;

v1.erase(v1.begin()+4,v1.begin()+6);  // deletes the elements from index 4 to index 5 (6 is not included)
for (auto val:v1){
    cout<<val<<" ";
}
cout<<endl;

// insertion in vector
v1.insert(v1.begin(),19);  // inserts 19 at index 0
for (auto val:v1){
    cout<<val<<" ";
}
cout<<endl;


v1.insert(v1.begin()+1,2,20);  // inserts 2 elements with value 20 at index 1
for (auto val:v1){
    cout<<val<<" ";
}
cout<<endl;


vector<int>copy(2,21);  // creates a vector with 2 elements with value 21
v1.insert(v1.begin(),copy.begin(),copy.end());  // inserts the elements of copy vector at the beginning of v1
for (auto val:v1){
    cout<<val<<" ";
}
cout<<endl;

cout<<"size of v1:"<<v1.size()<<endl;
cout<<"capacity of v1:"<<v1.capacity()<<endl;

v1.pop_back();  // removes the last element of the vector
for(auto val:v1){
    cout<<val<<" ";
}
cout<<endl;

v1.swap(v3);  // swaps the contents of v1 and v3
for (auto val:v1){
    cout<<val<<" ";
}
cout<<endl;

v1.insert(v1.end(),{5,6,7});
for(auto i:v1){
    cout<<i<<" ";
} cout<<endl;


v1.clear();
for(auto val:v1){
    cout<<val<<endl;
}
cout<<"end";

    return ;
}

int main(){
    explain_Vector();   // call the function here
    return 0;
}