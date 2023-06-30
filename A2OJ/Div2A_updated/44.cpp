#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n],c[n];
    if(a[0]==1)
    {
        b[0]=1;c[0]=0;
    }
    else
    {
        b[0]=0;c[0]=1;
    }
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==1 && a[i]==1)
        {
            b[i]=b[i-1]+1;
            c[i]=c[i-1];
        }
        else if(a[i-1]==1 && a[i]==2)
        {
            b[i]=b[i-1];
            c[i]=1;
        }
        else if(a[i-1]==2 && a[i]==1)
        {
            b[i]=1;
            c[i]=c[i-1];
        }
        else if(a[i-1]==2 && a[i]==2)
        {
            b[i]=b[i-1];
            c[i]=c[i-1]+1;
        }
    }
    /*for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<c[i]<<" ";
    cout<<endl;*/
    int mi=INT_MIN;
    for(int i=0;i<n;i++)
        mi=max(min(b[i],c[i]),mi);
    cout<<2*mi<<endl;
}