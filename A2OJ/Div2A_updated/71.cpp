#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c+=(a[i]/m);
        a[i]=a[i]%m;
    }
    for(int i=0;i<n;i++)
        if(a[i])
            c++;
    if(c%2==0)
        cout<<c/2;
    else
        cout<<c/2+1;
}