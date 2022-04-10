#include <iostream>
#include <vector>
using namespace std;
void swap(int &x, int &y)
{
  int temp=x;
  x=y;
  y=temp;
}
void insertion(vector<int>&tab)
{
  for(int i=0;i<sizeof(tab)-1;i++)
  {
    if(tab[i+1]<tab[i])
    {
      int j=i;
      while(j>=0)
      {
        if(tab[j+1]<tab[j])
        {
          swap(tab[j+1],tab[j]);

        }
        j--;
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
  insertion(tab);
  cout<<"Your sorted numbers in tab are : ";
  for(int i=0;i<tab.size();i++)
  {
    cout<<tab[i]<<", ";
  }
}
