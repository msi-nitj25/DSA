#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int count=0;
    int max=INT_MIN;
    
    int arr[5]={1,2,3,4,5};
    
    for (int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int sum=0;
            for (int i=st;i<=end;i++){
                cout<<arr[i];
                sum+=arr[i];
            }
            if(sum>max)
            max=sum;
            count++;
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"MAX sub-array sum:"<<max<<endl;
    cout<<"count:"<<count;
    return 0;
}