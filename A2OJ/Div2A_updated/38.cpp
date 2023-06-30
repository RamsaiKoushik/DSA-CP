#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int i=n;i>0;i--)
    {
        c+=(m/i);
        m=m%i;
    }
    cout<<c<<endl;
}