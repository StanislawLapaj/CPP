#include <iostream>
#include <vector>
using namespace std;
void swap(int &x, int &y)
{
  int temp=x;
  x=y;
  y=temp;
}
void count(vector<int>&tab)
{
  int a=0;
  int sizetab=tab.size();
  for(int i=0;i<sizetab;i++)
  {
    if(tab[i]>a)
    {
      a=tab[i];
    }
  }
  cout<<"The biggest element is : "<<a<<endl;
  int tab1[a+1];
  int sizetab1=a+1;
  for(int i=0;i<sizetab1;i++)
  {
    tab1[i]=0;
  }
  for(int i=0;i<sizetab;i++)
  {
    tab1[tab[i]]=tab1[tab[i]]+1;
  }
  cout<<"Numbers of elements : "<<endl;
  for(int i=1;i<sizetab1;i++)
  {
    cout<<tab1[i]<<" ";
  }
  cout<<endl;
  for(int i=2;i<sizetab1;i++)
  {
    tab1[i]=tab1[i-1]+tab1[i];
  }
  for(int i=1;i<sizetab1;i++)
  {
    cout<<tab1[i]<<" ";
  }
  cout<<endl;
  int tab2[sizetab];
  for(int i=0;i<sizetab1;i++)
  {
    tab2[tab1[tab[i]]-1]=tab[i];
    tab1[tab[i]]=tab1[tab[i]]-1;
  }
  cout<<"Sorted array : ";
  for(int i=0;i<sizetab;i++)
  {
    cout<<tab2[i]<<" ";
  }


}
int main()
{
  int a;
  cout<<"How much elements in the table?"<<endl;
  cin>>a;
  cout<<"Type elements: "<<endl;
  vector<int>tab;
  for(int i=0;i<a;i++)
  {
    int c;
    cin>>c;
    tab.push_back(c);
  }
  cout<<"Your numbers in tab are : ";
  for(int i=0;i<a;i++)
  {
    cout<<tab[i]<<", ";
  }
  cout<<endl;
  count(tab);
}
