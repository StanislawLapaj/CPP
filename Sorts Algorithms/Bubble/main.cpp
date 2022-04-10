#include <iostream>
#include <vector>
using namespace std;
void swap(int *x, int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}
void bubble(vector<int>&tab)
{
  int n=sizeof(tab);
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(tab[j]>tab[j+1])
      {
        swap(&tab[j],&tab[j+1]);
      }
    }
  }
}
int main()
{
  vector<int>tab;
  bool check=true;
  cout<<"Insert numbers, if You want to finish, type '0'"<<endl;
  while(check==true)
  {
    int a;
    cin>>a;
    if(a==0)
    {
      check=false;
    }
    else
    {
      tab.push_back(a);
    }
  }
  cout<<"Your numbers in tab are : ";
  for(int i=0;i<tab.size();i++)
  {
    cout<<tab[i]<<", ";
  }
  cout<<endl;
  bubble(tab);
  cout<<"Your sorted numbers in tab are : ";
  for(int i=0;i<tab.size();i++)
  {
    cout<<tab[i]<<", ";
  }
}
