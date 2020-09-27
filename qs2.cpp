//program to extract substring from a string starting from position a
//and b is the number of symbols to be extracted.
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
    int c;
    cout<<"Enter the string:";
    cin>>w;
    cout<<"Enter the starting position:";
    cin>>a;
    cout<<"number of symbols to be extracted:";
    cin>>b;
    c=b+a;
    substring1(w,a,c-1);
}
