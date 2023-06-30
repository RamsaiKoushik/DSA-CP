#include"bits/stdc++.h"
using namespace std;
int main()
{
    int m;
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    cin>>m;
    sort(a,a+3);
    int c=0;
    if(a[2]-a[0]<m)
    {
        c+=(m-(a[2]-a[0]));
        a[0]-=(m-(a[2]-a[0]));
    }
    if(a[1]-a[0]<m)
    {
        c+=(m-(a[1]-a[0]));
        a[0]-=(m-(a[1]-a[0]));
    }
    if(a[2]-a[1]<m)
    {
        c+=(m-(a[2]-a[1]));
        a[2]+=(m-(a[2]-a[0]));
    }
    cout<<c<<endl;
}