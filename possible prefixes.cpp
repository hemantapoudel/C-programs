//program to print all possible prefixes from string
#include <iostream>
#include <string>
using namespace std;
void prefix1(string w)
{
    int strlength=w.size();
    string final;
    string finalc;
    int i;
    cout<<"All possible prefixes are";
    for(i=0; i<=strlength; i++)
    {
        final=w[i-1];
        finalc=finalc+final;
        cout<<finalc<<"\n";
    }
}

int main()
{
    string w;
    cout<<"Enter the string:";
    cin>>w;
    prefix1(w);
}
