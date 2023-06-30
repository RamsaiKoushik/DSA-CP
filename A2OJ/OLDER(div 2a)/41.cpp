#include"bits/stdc++.h"
using namespace std;
#define  ll long long int
int main()
{
    ll l,r;
    cin>>l>>r;
    if(r-l>2)
    {
        if(l%2!=0)
            cout<<l+1<<" "<<l+2<<" "<<l+3;
        else
            cout<<l<<" "<<l+1<<" "<<l+2;
    }
    else if(r-l>1 && l%2==0)
    {
        cout<<l<<" "<<l+1<<" "<<l+2;
    }
    else
        cout<<-1;
}