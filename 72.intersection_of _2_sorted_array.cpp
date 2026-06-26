/*

class Solution {
public:
   vector<int> intersection(vector<int>&a, vector<int>&b) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

   int n1=a.size();
   int n2=b.size();
   int i=0;
   int j=0;
   vector<int>ans;
   while(i<n1 && j<n2){
    if (a[i]==b[j]){
        if(ans.empty() || ans.back()!=a[i]){ //ans.back() point to the last element of the vector ans
            ans.emplace_back(a[i]);
        }
        i++;
        j++;
    }
    else if (a[i]>b[j]){
        j++;
    }
    else{
        i++;
    }
   }

    return ans;
}
};

*/