#include<iostream>
using namespace std;
int main()
{
  int num[5];
  cout<<"enter numbers :"<<endl;
  for (int i=0;i<5;i++){
    cin>>num[i];
  }
  int max=num[0];
  for (int i=0;i<5;i++){
      if (num[i]>max)
      max=num[i];
  }
  cout<<"MAX: "<<max;
  return 0;
}
