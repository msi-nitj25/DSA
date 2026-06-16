#include<bits/stdc++.h>
using namespace std;
vector<int> hashh(pow(10,7),0); // global hash vector to store frequency of elements
// pow(10,7) globally and pow(10,6) locally because of memory constraints

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
  
    for (int i = 0; i < n; i++){
        hashh[arr[i]]+=1;
    }
    
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while(q--){
        int x;
        cout << "Enter number to search: ";
        cin >> x;
        cout << "Frequency: " << hashh[x] << endl;
    }
    return 0;
}