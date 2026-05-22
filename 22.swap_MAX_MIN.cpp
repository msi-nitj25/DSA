#include<bits/stdc++.h>
using namespace std;
void swap_arr(int arr[],int size){
    
    int max=INT_MIN;
    int min=INT_MAX;
   
    for (int i=0;i<size;i++){
        if (arr[i]<min)
        min=arr[i];
        if (arr[i]>max)
        max=arr[i];
    }
    cout<<" before swaping:"<<endl;
    cout<<"MAX:"<<max<<endl;
    cout<<"MIN:"<<min<<endl;
    swap(max,min);
    cout<<" after swaping:"<<endl;
    cout<<"MAX:"<<max<<endl;
    cout<<"MIN:"<<min<<endl;
    
    
    return ;
}

int main()
{
    int arr[]={4,2,6,8,9,3,1,7};
    swap_arr(arr,8);
    

    return 0;
}