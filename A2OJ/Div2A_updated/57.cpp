#include"bits/stdc++.h"
using namespace std;
int MOD(int n)
{
    if(n<0)
        return -n;
    else
        return n;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int ma=INT_MIN;
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            e++;
        else
            o++;
    }
    //ma=max(MOD(e-o),ma);
    for(int i=0;i<k;i++)
    {
        e=0;o=0;
        for(int j=0;j<n;j++)
        {
            if((j-i)%k!=0)
                if(a[j]==1)
                    e++;
                else
                    o++;
        }
        //cout<<i<<" "<<e<<" "<<o<<endl;
        ma=max(ma,MOD(e-o));
    }
    cout<<ma<<endl;
}