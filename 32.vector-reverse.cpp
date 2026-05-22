#include<iostream>
#include<vector>
using namespace std;
void rev_vec(vector<int>&rev) {
    int st=0;
    int ed=rev.size()-1;
    while (st<ed){
        int a=rev[st];
        rev[st]=rev[ed];
        rev[ed]=a;
        st++;
        ed--; 
    }
    for (int val :rev){
        cout<<val<<" ";
    }
    return ;
}

int main(){
    vector<int>msi={1,2,3,4,5,6,7,8,9};
    rev_vec(msi);
    return 0;
}