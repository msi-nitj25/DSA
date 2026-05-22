// STL stands for Standard Template Library. It is a powerful set of C++ template classes to provide general-purpose classes and functions with templates.
// It includes algorithms and data structures that can be used to solve various problems efficiently.
// Some of the commonly used STL components include vector, list, deque, stack, queue, priority_queue, set, map, multiset, multimap, unordered_set, unordered_map, etc.
// STL provides a wide range of algorithms such as sorting, searching, counting, etc. that can be applied to these data structures.
// STL is widely used in competitive programming and software development due to its efficiency and ease of use.


#include<bits/stdc++.h>
using namespace std;

//----------------------------------------------------------------------------------------

bool comp(pair<int,int>p1, pair<int,int>p2){
if (p1.second<p2.second) return true;
if (p1.second>p2.second) return false;
if (p1.second==p2.second){
    if (p1.first>p2.first) return true;
    else return false;
}
}

//----------------------------------------------------------------------------------------


void explainSorting(){

vector<int>v={1,4,5,2,7,9,8,6,3,0};

//sort(start_iterator, end_iterator);
sort(v.begin()+4,v.end());  // sort the vector from index 4 to the end of the vector
for (auto val:v){
    cout<<val<<" ";
} cout<<endl;

sort(v.begin(),v.end());  // sort the vector in ascending order
for (auto val:v){
    cout<<val<<" ";
} cout<<endl;



sort(v.begin(),v.end()-4,greater<int>());  // sort the vector in descending order
for (auto val:v){
    cout<<val<<" ";
} cout<<endl;

sort(v.begin(),v.end(),greater<int>());  // sort the vector in descending order
for (auto val:v){
    cout<<val<<" ";
} cout<<endl;

//------------------------------------------------------------------------------------

pair<int,int>p1[]={ {1,5},{4,5},{4,3},{9,8},{6,7},{3,0},{8,6},{7,9},{2,4},{0,1},{2,6},{2,1} };
// sort it according to the second element of the pair in ascending order
// if second element is same then sort according to the first element of the pair,but in descending order 

// " sort(a,a+n,comp) " where comp is a comparator function that takes two pairs as input
// and returns true if the first pair should come before the second pair in the sorted order, else returns false.
int n = sizeof(p1)/sizeof(p1[0]);

sort(p1, p1 + n, comp);
for (auto val:p1){
    cout<<val.first<<" "<<val.second<<endl;
}

}


int main(){
    explainSorting();   // call the function here
    return 0;
}