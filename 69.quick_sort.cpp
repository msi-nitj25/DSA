/* sort array in assending order  but also sort in descending order by changing the condition in 
if statement */
/*
step 1: select a pivot element from the array
step 2: partition the array into two sub-arrays such that all elements less than the pivot
        are on the left side and all elements greater than the pivot are on the right side
step 3: recursively apply the same process to the left and right sub-arrays until the base 
        case is reached
*/
#include<bits/stdc++.h>
using namespace std;


   int partition(vector<int>& arr, int low, int high){
   int pivot = arr[low];
    int i = low;
    int j=high;
    while (i<j){
        while (arr[i]<=pivot && i<high){
            i++;
        }
        while (arr[j]>pivot && j>low){
            j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[low],arr[j]);
        return j;
   }

void quickSort(vector<int>&arr,int low,int high){
    if (low<high){
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } return 0;
}
