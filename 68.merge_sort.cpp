// recursive algorithm
/*
step 1: divide the array into two halves
step 2: recursively sort the two halves
step 3: merge the two sorted halves into a single sorted array
step 4: return the sorted array
*/
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums, int low, int mid, int high) {
   vector<int>temp;
   int left=low, right=mid+1;
   while(left<=mid && right<=high) {
         if(nums[left]<nums[right]) {
              temp.push_back(nums[left]);
              left++;
         } else {
              temp.push_back(nums[right]);
              right++;
         }
    }
    while (left<=mid) {
         temp.push_back(nums[left]);
         left++;
    }
    while(right<=high) {
         temp.push_back(nums[right]);
         right++;
    }
    for(int i=low; i<=high; i++) {
         nums[i]=temp[i-low];
    }
}
void mS(vector<int>& nums, int low, int high) {
    if(low==high) return;
    int mid=(low+high)/2;
    mS(nums, low, mid);
    mS(nums, mid+1, high);
    merge(nums, low, mid, high);
}
int main() {
    vector<int> nums={38, 27, 43, 3, 9, 82, 10};
    mS(nums, 0, nums.size()-1);
    for(int i=0; i<nums.size(); i++) {
         cout<<nums[i]<<" ";
    }
    return 0;
}