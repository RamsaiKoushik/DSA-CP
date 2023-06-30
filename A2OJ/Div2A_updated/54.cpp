#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    m=m-1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c,mi=INT_MAX;
    for(int i=m+1;i<n;i++)
    {
        if(k>=a[i] && a[i]!=0)
        {
            mi=i-m;break;
        }
    }
    //cout<<mi<<endl;
    for(int i=m-1;i>-1;i--)
    {
        if(k>=a[i] && a[i]!=0)
        {
            mi=min(mi,m-i);break;
        }
    }
    cout<<10*mi;
}