// store everthing in sorted order and unique values only
#include<bits/stdc++.h>
using namespace std;
void explainSet(){
    set<int>st;
    st.insert(1);
    st.emplace(2);

    st.insert({2,5,4,3,7,9,8,6});
    for (auto i:st){
        cout<<i<<" ";
    } cout<<endl;

    st.insert(6);
    for (auto i:st){
        cout<<i<<" ";
    } cout<<endl;
    
    /* functionality of insert in set is different from vector. If we try to insert an element that already exists in the set,
    it will not be inserted again and the set will remain unchanged. In vector, we can insert duplicate elements. */

    auto it=st.find(3);  // returns an iterator to the element if found, else returns st.end()
    if (it != st.end()){
        cout<<"Element found: "<<*it<<endl;
    } else {
        cout<<"Element not found"<<endl;
    }
    auto it2=st.find(7);  // returns st.end() since 7 is not present in the set
    if (it2 != st.end()){
        cout<<"Element found: "<<*it2<<endl;
    } else {
        cout<<"Element not found"<<endl;
    }
    st.erase(3);  // removes the element 3 from the set . Take O(log n) time complexity
    for (auto i:st){
        cout<<i<<" ";
    } cout<<endl;

    auto cnt=st.count(4);  // returns 1 if element is present in the set, else returns 0
    cout<<"Count of 4: "<<cnt<<endl;

auto it3=st.find(4);
st.erase(it3);  // removes the element pointed by the iterator it3 from the set . Take constant time since we are erasing using iterator
    for (auto i:st){
        cout<<i<<" ";
    } cout<<endl;

    auto it4=st.find(6);
    auto it5=st.find(7);
    st.erase(it4,it5);  // removes the elements from it4 to it5 (7 is not included)
    for (auto i:st){
        cout<<i<<" ";
    } cout<<endl;

// lower_bound() and upper_bound() function in set are used to find the position of an element in the set.
// lower_bound() returns an iterator to the first element that is not less than the given value (i.e., greater than or equal to the value).
// upper_bound() returns an iterator to the first element that is greater than the given value.
// it work in same way as in vector, but it will return the position of the element in the sorted order of the set.
    auto it6=st.lower_bound(5);  // returns an iterator to the first element that is not less than 5
    cout<<"Lower bound of 5: "<<*it6<<endl;

    auto it7=st.upper_bound(8);  // returns an iterator to the first element that is greater than 8
    cout<<"Upper bound of 8: "<<*it7<<endl;

// if  upper and lower bound are not present in the set, then it will return st.end() iterator. So we need to check that before dereferencing the iterator.

    auto it8=st.lower_bound(0);  // returns st.end() since there is no element that is not less than 0 in the set
    cout<<"Lower bound of 0: "<<*it8<<endl;

    auto it9=st.upper_bound(9);  // returns st.end() since there is no element that is greater than 9 in the set
    cout<<"Upper bound of 9: "<<*it9<<endl;

}
int main(){
    explainSet();
    return 0;

}