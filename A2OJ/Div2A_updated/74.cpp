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
    int n;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    int temp1=a[n/2],temp2=a[n/2]-1;
    s=a[n/2]+1;
    if(temp2==0)
        temp2++;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        if(MOD(a[i]-s)!= 0)
            c1+=(MOD(a[i]-s)-1);
        if(MOD(a[i]-temp1)!= 0)
            c2+=(MOD(a[i]-temp1)-1);
        if(MOD(a[i]-temp2)!= 0)
            c3+=(MOD(a[i]-temp2)-1);
    }
    if(c1<min(c2,c3))
        cout<<s<<" "<<c1;
    else if(c2<min(c1,c3))
        cout<<temp1<<" "<<c2;
    else
        cout<<temp2<<" "<<c3;
}