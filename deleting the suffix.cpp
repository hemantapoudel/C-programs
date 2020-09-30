//program to delete number of starting symbols from the string.
#include <iostream>
#include <string>
using namespace std;
void suffix(string w,int n)
{
    int l=w.size();
    int p=n;
    string final;
    string finalc;
    int i;
    for(i=p+1; i<=l; i++)
    {
        final=w[i-1];
        finalc=finalc+final;
    }
    cout<<"The new string is: "<<finalc<<"\n";
}

int main()
{
    string w;
    int n;
    cout<<"Enter the string:";
    cin>>w;
    cout<<"Enter the number of starting symbols to be removed:";
    cin>>n;
    suffix(w,n);
}
