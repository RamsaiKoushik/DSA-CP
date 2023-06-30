#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    if(a==c)
    {
        cout<<"YES";
        return 0;
    }
    while(a!=b && c!=d)
    {
        a++;
        if(a>n)
            a=1;
        c--;
        if(c<1)
            c=n;
        if(a==c)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}