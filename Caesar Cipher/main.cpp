#include <iostream>
using namespace std;
int main()
{
    string tekst;
    int x;
    cout<<"Podaj klucz: ";
    cin>>x;
    cout<<"Podaj słowo: ";
    cin>>tekst;
    cout<<endl<<"Twoje słowo to: "<<tekst<<endl;
    for(int i=0;i<tekst.length();i++)
    {

        if(tekst[i]>=65 && tekst[i]<=90-x) tekst[i]=int(tekst[i])+x;
        else if(tekst[i]>=91-x && tekst[i]<=90) tekst[i]=int(tekst[i])-26+x;
        else if(tekst[i]>=97 && tekst[i]<=122-x) tekst[i]=int(tekst[i])+x;
        else if(tekst[i]>=123-x && tekst[i]<=122) tekst[i]=int(tekst[i])-26+x;
    }
    cout<<tekst;

    return 0;
}
