#include <iostream>
#include<vector>
using namespace std;

// dynamic memory is allocated on the heap and is managed by the programmer.
/* dynamic memory allocated at the time of execution and can be accessed using pointers.
the size of the vector can be changed at runtime by adding or removing elements.
the capacity of the vector is the amount of memory allocated for the vector, which may be greater than the size of the vector.
when the size of the vector exceeds its capacity, the vector will automatically resize itself to accommodate more elements. */
// capacity got doubled when the size exceeds the capacity. ex.  2 -> 4 -> 8 -> 16 -> 32 -> 64 -> ...

int main(){
    vector<int>msi;
    cout<<"size:"<<msi.size()<<endl;
    cout<<"capacity :"<<msi.capacity()<<endl<<endl;
    
    msi.push_back(1);
    cout<<"size:"<<msi.size()<<endl;
    cout<<"capacity :"<<msi.capacity()<<endl<<endl;
    
    msi.push_back(2);
    cout<<"size:"<<msi.size()<<endl;
    cout<<"capacity :"<<msi.capacity()<<endl<<endl;
    
    msi.push_back(3);
    cout<<"size:"<<msi.size()<<endl;
    cout<<"capacity :"<<msi.capacity()<<endl<<endl;
    
    msi.push_back(4);
    cout<<"size:"<<msi.size()<<endl;
    cout<<"capacity :"<<msi.capacity()<<endl<<endl;

   return 0;
}