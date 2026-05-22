#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int num[5];
  cout<<"enter numbers :"<<endl;
  for (int i=0;i<5;i++){
    cin>>num[i];
  }
  int max= INT_MIN; // INT_MIN== (-) infinity --> (smallest possible value of int).
  int min= INT_MAX; // INT_MAX== (+) infinity --> (largest possible value of int).
  for (int i=0;i<5;i++){
      if (num[i]>max)
      max=num[i];
      if (num[i]<min)
      min=num[i];
  }
  cout<<"MAX: "<<max<<endl;
  cout<<"MIN: "<<min;
  return 0;
}

