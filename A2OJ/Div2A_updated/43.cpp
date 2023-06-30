#include"bits/stdc++.h"
using namespace std;
int MOD(int x)
{
    if(x<0)
        return -x;
    else
        return x;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=2;
    for(int i=0;i<n-1;i++)
    {
        if(2*m==MOD(a[i]-a[i+1]))
            c+=1;
        else if(2*m<MOD(a[i]-a[i+1]))
            c+=2;
    }
    cout<<c;
}