#include<iostream>
#include<vector>
using namespace std;
void pairSUM(vector<int>arr,int target){
    
    int m=arr.size();
    for (int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<i<<","<<j<<")"<<" ";
            }
        }
    }
    
    
    return ;
    
}
int main(){
    int n;
    cout<<"Enter the sum of pair :";
    cin>>n;
    
    vector<int>arr={2,4,9,5,1,7,8,3,6};
    pairSUM(arr,n);
    
    
    return 0;
}

