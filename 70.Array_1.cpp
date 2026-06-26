#include<bits/stdc++.h>
using namespace std;
int sL(vector<int >&a ,int n){
   int max=a[0];
   int smax=INT_MIN;
   for(int i=1;i<n;i++){
         if(a[i]>max){
              smax=max;
              max=a[i];
         }
         else if(a[i]>smax && a[i]!=max){
              smax=a[i];
         }
    } return (max+smax);
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sL(a,n);
}