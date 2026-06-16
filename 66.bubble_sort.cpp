// opposite to selection sort, bubble sort is stable sorting algorithm
// time complexity: O(n^2) in worst and average case, O(n) in best case when the array is already sorted
// adjecent swapping is used in bubble sort . max is moved to the end of the array in each iteration
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr){
    int n = arr.size();
    for (int i=0;i<n-1;i++){
        int didswap =0;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap = 1;
            }
        }
        if (didswap == 0){
            break;
        }
        cout<<"Run"<<endl;
    } 
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } return 0;
}

