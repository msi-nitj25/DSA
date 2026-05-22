// store everthing in sorted order and unique values only
#include<bits/stdc++.h>
using namespace std;
void MaxEl(){
    vector<int>st;
    st.push_back(1);
    st.emplace_back(2);

    st.insert(st.end(),{2,5,4,3,7,9,8,6});
    for (auto i:st){
        cout<<i<<" ";
    } cout<<endl;

    int maxi=*max_element(st.begin(),st.end());
    cout<<"max element in the vector is: "<<maxi<<endl;

    

}
int main(){
    MaxEl();
    return 0;

}
