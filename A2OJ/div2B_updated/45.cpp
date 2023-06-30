#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    //cout<<"y";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    //cout<<"y1";
    ll cost=0;
    ll z,o;
    z=o=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(a[i][j]==0)
                z++;
            else
                o++;
        //cout<<z<<" "<<o<<" "<<i<<endl;
        cost+=(pow(2,z)-1-z+pow(2,o)-1-o);
        z=0;
        o=0;
    }
    //cout<<cost<<"y"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            if(a[j][i]==0)
                z++;
            else
                o++;
        cost+=(pow(2,z)-1-z+pow(2,o)-1-o);
        z=0;
        o=0;
    }
    cout<<cost+n*m<<endl;
}