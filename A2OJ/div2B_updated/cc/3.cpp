#include"bits/stdc++.h"
using namespace std;
int MOD(int a)
{
    if(a<0)
        return -a;
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=m/2)
                s+=MOD(a[i]-m);
            else
                s+=MOD(a[i]-1);
        }
        cout<<s<<endl;
    }
}