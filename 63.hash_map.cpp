#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
  // pre-compute the frequency of each element in the array using a hash map (unordered_map)
  unordered_map<int,int>mpp;
  for (int i = 0; i < n; i++){
      mpp[arr[i]]+=1;
  }
  for (auto it : mpp){
      cout<<it.first<<"-->"<<it.second<<endl;
  }
    
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout<<mpp[x]<<endl;
    }
    return 0;
} // for string --> map<char,int>mpp; and mpp[s[i]]+=1; and for query mpp[x]