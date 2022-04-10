#include <iostream>
using namespace std;
int main()
{
    string tekst;
    cout<<"Podaj słowo: ";
    cin>>tekst;
    cout<<endl<<"Twoje słowo to: "<<tekst<<endl;
    int x[tekst.length()];
    cout<<"Podaj klucz po jednej cyfrze: "<<endl;
    for(int i=0;i<tekst.length();i++)
    {
      cout<<i+1<<" cyfra: ";
      cin>>x[i];
    }
    for(int i=0;i<tekst.length();i++)
    {
      if(tekst[i]>=65 && tekst[i]<=90-x[i]) tekst[i]=int(tekst[i])+x[i];
      else if(tekst[i]>=91-x[i] && tekst[i]<=90) tekst[i]=int(tekst[i])-26+x[i];
      else if(tekst[i]>=97 && tekst[i]<=122-x[i]) tekst[i]=int(tekst[i])+x[i];
      else if(tekst[i]>=123-x[i] && tekst[i]<=122) tekst[i]=int(tekst[i])-26+x[i];
    }
    cout<<tekst;
    return 0;
}
