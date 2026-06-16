#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int m;
    cin >> m;
    
    vector<int> hashh(m,0); // hash vector to store frequency of elements based on modulus
    
    for (int i = 0; i < n; i++){
        hashh[arr[i] % m] += 1; // increment frequency based on modulus
    }
    
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << "Frequency: " << hashh[x % m] << endl; // output frequency based on modulus
    }
    
    return 0;
} 
/*  this code reads an array of integers and a modulus value,
then counts the frequency of elements based on their modulus with the given value.
 It then answers queries about the frequency of elements that have a specific modulus. */