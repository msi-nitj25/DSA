#include <iostream>
#include<vector>
using namespace std;

int main()
{
   // vector<int>vec;
   //vector<int>vec={1,2,3}
   //vector<int>vec(size_of_vector,value)
      vector<int>vec1={1,2,3};
      cout<<vec1[1]<<endl<<endl;
      
   vector<int>vec2(4,7);
   for (int i=0;i<4;i++){
       cout<<vec2[i]<<endl;
   }
   cout<<endl;

   for (int val:vec1){
       cout<<val<<endl;
   }
   cout<<endl;
   
   vector<char>alpha={'a','b','c','d','e','f'};
   for (char val:alpha)
   {
       cout<<val<<endl;
   }
    return 0;
}