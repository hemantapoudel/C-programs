//program to delete number of trailing symbols from the string.
#include <iostream>
#include <string>
using namespace std;
void prefix(string w,int n)
{
    int l=w.size();
    int p=l-n;
    string final;
    string finalc;
    int i;
    for(i=0; i<=p; i++)
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
    cout<<"Enter the number of trailing symbols to be removed:";
    cin>>n;
    prefix(w,n);
}
