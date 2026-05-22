#include<iostream>
using namespace std;
void changeArr(int arr[],int size){
    for (int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
    return ;
}
int main()
{
    int odd[]={1,3,5,7,9};
    changeArr(odd,5);
    for (int i=0;i<5;i++){
    cout<<odd[i]<<" ";
    }
  return 0;
}