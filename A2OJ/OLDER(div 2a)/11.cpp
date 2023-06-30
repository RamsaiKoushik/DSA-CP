#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int m1,m2;
    int ma=INT_MIN,mi=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>ma)
        {
            m1=i;
            ma=a[i];
        }
        if(a[i]<=mi)
        {
            m2=i;
            mi=a[i];
        }
    }
    if(m1>m2)
        cout<<m1+(n-1-m2)-1;
    else
        cout<<m1+(n-1-m2);
}