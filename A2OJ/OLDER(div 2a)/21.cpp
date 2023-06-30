#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c=0;
    if(a*m>b)
        c=1;
    if(!c)
        cout<<n*a;
    else
    {
        if((n%m)*a<b)
            cout<<(n%m)*a+(n/m)*b;
        else
            if(n%m!=0)
                cout<<(n/m+1)*b;
            else
                cout<<(n/m)*b;
    }
}