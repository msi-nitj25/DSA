#include <iostream>
using namespace std;
int fibonacci(int n)
{
   
   
   if (n<=0) return 0;
   if (n==1) return 1;
   
   int prev=0;
   int curr=1;
   
   for (int i=2;i<=n;i++)
   {
       int next=curr+prev;
       prev=curr;
       curr=next;
      
   }
   return curr;
}

int main() {
    int n;
   cout<<"Enter value of n:";
   cin>>n;
   cout<<fibonacci(n);
   
    return 0;
}