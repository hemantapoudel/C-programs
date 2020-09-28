//Program to extract all possible suffixes from a string
#include <iostream>
#include <string>
using namespace std;
void suffix1(string w)
{
    int strlength=w.size();
    string final;
    string finalc;
    int i;
    cout<<"All possible suffixes are";
    for(i=strlength; i>=0; i--)
    {
        final=w[i];
        finalc=final+finalc;
        cout<<finalc<<"\n";
    }
}

int main()
{
    string w;
    cout<<"Enter the string:";
    cin>>w;
    suffix1(w);
}
