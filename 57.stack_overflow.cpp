#include<bits/stdc++.h>
using namespace std;
void print(auto n){
    cout<<n<<endl;
    n++;
    print();
}
int main(){
    print(1);
    return 0;
}