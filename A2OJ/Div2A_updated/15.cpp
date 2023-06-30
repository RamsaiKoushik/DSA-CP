#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    int ma1=INT_MIN,ma2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ma1=max(ma1,a[i]);
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        ma2=max(ma2,b[i]);
    }
    cout<<ma1<<" "<<ma2;
}