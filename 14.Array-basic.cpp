#include<iostream>
using namespace std;
int main()
{
  int marks[]={89,99,87,78,65};
  // array of size 5 is created. index= 0 to (size-1).
  double price[100]={98.99,85.35,94.24};
  // array of size 100 is created , whose first 3 values are defined.
  for (int i=0;i<5;i++) // i<size
  {
    cout<<"Marks:"<<marks[i]<<endl;
  // here index must belong to (0,size-1).
  }
  for (int i=0;i<100;i++)
  {
      price[i]+=i*10;
      cout<<"price:"<<price[i]<<endl;
  }
  return 0;
}