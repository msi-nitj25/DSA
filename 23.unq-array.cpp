#include <iostream>
#include<climits>
using namespace std;
void unq_arr(int arr[],int size){
   
    int i=0,j=0;
  for (i=0;i<size-1;i++){
       int flag=0;
      for (j=0;j<size;j++){
          if (arr[i]==arr[j] && i!=j){
          flag=1;
          break;
          }
          else flag=0;
      }
      if(flag==0)
      cout<<arr[i]<<" ";
  }
    
    
    return ;
}

int main()
{
    int arr[]={4,2,6,8,9,3,1,7,7,2};
    unq_arr(arr,10);
    

    return 0;
}