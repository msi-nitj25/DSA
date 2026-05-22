#include <iostream>

int main()
{
    using namespace std;
    int arr[]={4,2,6,8,9,3,1,7};
    int flag=0;
    int idx=0;
    for (int i=0;i<8;i++){
        if (arr[i]==8){
        flag=1;
        idx=i;
        break;
        }
        
    }
    if (flag==1){
        cout<<"exist"<<endl;
        cout<<"index :"<<idx;
    }
    

    return 0;
}