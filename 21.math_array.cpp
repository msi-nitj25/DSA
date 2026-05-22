#include <iostream>
using namespace std;
void math_arr(int arr[],int size){
    int sum=0;
    int pd=1;
    for (int i=0;i<size;i++){
        sum+=arr[i];
        pd*=arr[i];
    }
    cout<<"SUM :"<<sum<<endl;
    cout<<"PRODUCT :"<<pd<<endl;
    return ;
}

int main()
{
    int arr[]={4,2,6,8,9,3,1,7};
    math_arr(arr,8);
    

    return 0;
}