#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSUM(vector<int>msi,int target){
int n=msi.size();
vector<int>pair;

int i=0,j=n-1;
while (i<j){
    if (msi[i]+msi[j]>target){
        j--;
    }
    else if(msi[i]+msi[j]<target){
        i++;
    }
    else {
     pair.push_back(i);
     pair.push_back(j);
     return pair;
    }
}
return pair;
    
}
int main(){
    int n;
    cout<<"Enter the sum of pair :";
    cin>>n;
    
    vector<int>arr={1,2,4,7,9,12,15,17,19,21};
    vector<int>pair=pairSUM(arr,n);
    cout<<pair[0]<<" "<<pair[1];
    
    
    return 0;
}