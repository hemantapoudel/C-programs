//program to extract a substring from a string from position a to position b
#include <iostream>
#include <string>
using namespace std;
void substring1(string w, int a, int b)
{
    string final;
    string finalc;
    int i=a;
    for(i=a; i<=b; i++)
    {
        final=w[i-1];
        finalc=finalc+final;
    }
    cout<<finalc;
}
int main()
{
    string w;
    int a;
    int b;
    cout<<"Enter the string:";
    cin>>w;
    cout<<"Enter the starting position:";
    cin>>a;
    cout<<"Enter the ending position:";
    cin>>b;
    if(a>=1 && a< w.size() && b<=w.size())
        {
            substring1(w,a,b);
        }
    else
        {
            cout<<"Enter the correct position";
        }
}
