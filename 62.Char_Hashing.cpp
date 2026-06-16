#include<bits/stdc++.h>
using namespace std;
vector<int> hashh(pow(10,7),0); // global hash vector to store frequency of elements
// pow(10,7) globally and pow(10,6) locally because of memory constraints

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    for (auto &c : s) c=tolower(c); // convert string to lowercase for case-insensitive counting
    int n=s.size();
    for (int i = 0; i < n; i++){
        hashh[s[i]]+=1;
    }

    
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter char to search: ";
        cin >> c;
        cout << "Frequency: " << hashh[c] << endl;
    }
    return 0;
}