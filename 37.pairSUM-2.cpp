#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSUM(vector<int>arr,int target){

    vector<int>pair;
    int m=arr.size();
    for (int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(arr[i]+arr[j]==target){
                pair.push_back(i);
                pair.push_back(j);
            }
        }
    }
    
    
    return pair;
    
}
int main(){
    int n;
    cout<<"Enter the sum of pair :";
    cin>>n;
    
    vector<int>arr={2,4,9,5,1,7,8,3,6};
    vector<int>pair=pairSUM(arr,n);
    cout<<pair[0]<<" "<<pair[1]<<"  --  ";
    cout<<pair[2]<<" "<<pair[3]<<"  --  ";
    cout<<pair[4]<<" "<<pair[5]<<"  --  ";
    cout<<pair[6]<<" "<<pair[7]<<"  --  ";
    
    
    return 0;
}

