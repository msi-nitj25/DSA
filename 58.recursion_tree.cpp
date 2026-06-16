#include<bits/stdc++.h>
using namespace std;
void stack_flow(int n){
   if (n>10) return; // base case to prevent infinite recursion and stack overflow

    cout<<n<<endl;
    n++;
    stack_flow(n);
    
   
}
int main(){
    stack_flow(1);
    return 0;
}