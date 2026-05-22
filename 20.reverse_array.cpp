#include <iostream>
using namespace std;
void rev_arr(int arr[],int size){
    // using two pointer approach .
    for(int i=0;i<size/2;i++){
    swap(arr[i],arr[size-1-i]);
    }
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}

int main()
{
    int arr[]={4,2,6,8,9,3,1,7};
    rev_arr(arr,8);
    

    return 0;
}