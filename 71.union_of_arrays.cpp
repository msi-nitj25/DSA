#include<bits/stdc++.h>
using namespace std;
/*
BRUTE FORCE APPROACH
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for (auto val:nums1){
           st.emplace(val);
        }
        for (auto val:nums2){
           st.emplace(val);
        }
       vector<int>ans;
       for (auto it:st){
        ans.emplace_back(it);
       }
       return ans;
    }
};

*/
vector<int> sortedArray(vector<int>&a, vector<int>&b) {
   int n1=a.size();
   int n2=b.size();
   int i=0;
   int j=0;
   vector<int>ans;
   while(i<n1 && j<n2){
    if (a[i]<=b[j]){
        if(ans.empty() || ans.back()!=a[i]){ //ans.back() point to the last element of the vector ans
            ans.emplace_back(a[i]);
        }
        i++;
    }
    else{
        if(ans.empty() || ans.back()!=b[j]){
            ans.emplace_back(b[j]);
        }
        j++;
    }
   }
   while(i<n1){
      if(ans.empty() || ans.back()!=a[i]){
               ans.emplace_back(a[i]);
         }
         i++;
   }
   while(j<n2){
      if(ans.empty() || ans.back()!=b[j]){
               ans.emplace_back(b[j]);
         }
         j++;
   }

    return ans;
}