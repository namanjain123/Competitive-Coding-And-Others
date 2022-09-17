#include<iostream>
using namespace std;
int main()
{
  int rows,columns;
  cout<<"Enter no. of columns: ";
  //Convert to rows
  cin>>columns;
  if(columns%2==1){
  rows=(columns/2)+1;
  for(int i=1;i<=rows;i++)
  {
    for(int j=1;j<=rows-i;j++)
    cout<<"*";
        for(int k=1;k<=2*i-1;k++)
        {
          if(k==1 || k==2*i-1)
          cout<<"*";
          else
          cout<<" ";
        }
      for(int j=1;j<=rows-i;j++){
      cout<<"*";}
    cout<<"\n";
  }
    for(int i=rows;i>=1;i--)
  {
    for(int j=1;j<=rows-i;j++)
    cout<<"*";
        for(int k=1;k<=2*i-1;k++)
        {
          if(k==1 || k==2*i-1)
          cout<<"*";
          else
          cout<<" ";
        }
      for(int j=1;j<=rows-i;j++)
      cout<<"*";
    cout<<"\n";
  }}
  else{cout<<"please eneter a odd number";}
  return 0;}