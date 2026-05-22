#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;;
    int maximum=INT_MIN;
    
    int arr[5]={-5,-2,-9,3,4,};
    
    for (int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
            sum+=arr[end];
            maximum=max(sum,maximum);
            // cout<<sum<<" ";
            // cout<<maximum<<endl;
        }
    }
    cout<<"MAX sub-array sum:"<<maximum<<endl;
    return 0;
}