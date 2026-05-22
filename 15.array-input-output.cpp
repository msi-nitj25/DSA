#include<iostream>
using namespace std;
int main()
{
  int marks[5];
  cout<<"Enter marks for student : ";
  for(int i=0;i<5;i++)
  {
     cin>>marks[i];
  }
  for (int i=0;i<5;i++)
  {
    cout<<"Marks of student "<<i+1<<": "<<marks[i]<<endl;
  }  
  
  return 0;
}