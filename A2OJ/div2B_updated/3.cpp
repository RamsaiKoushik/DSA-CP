#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int p[n];
    int S=0;
    int temp,t=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        S+=p[i];
    }
    temp=p[0];
    int c=0;
    sort(p,p+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(S<=(temp*a)/b)
            break;
        if(p[i]==temp && !t)
        {
            t=1;
            continue;
        }
        c++;
        S-=p[i];
    }
    cout<<c<<endl;
}