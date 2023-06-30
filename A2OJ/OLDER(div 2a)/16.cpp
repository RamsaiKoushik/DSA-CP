#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p[m];
    for(int i=0;i<m;i++)
        cin>>p[i];
    sort(p,p+m);
    int i=0,j=n-1;
    int mi=INT_MAX;
    for(int k=n-1;k<m;k++)
        mi=min(mi,p[j++]-p[i++]);
    cout<<mi<<endl;
}