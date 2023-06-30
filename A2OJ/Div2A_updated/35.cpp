#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c<=b)
        cout<<c;
    else if(c>b && c<=a)
        cout<<b;
    else if(c>a && c-a<=b)
        cout<<b-(c-a);
    else
        cout<<0;
}