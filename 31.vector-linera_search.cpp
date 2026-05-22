#include<iostream>
#include<vector>
using namespace std; 
int main(){
    vector<int>ls={2,4,8,9,6,5,4,0};
    for(int val : ls){
        if (val==2)
        {
            cout<<"exist";
        }
        else cout<<"not exist";
        break;
    }
}