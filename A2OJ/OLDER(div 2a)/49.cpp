#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    //cin>>n,m;
    cin>>n>>m;
    int mic=INT_MAX,mac=INT_MIN;
    int mi_nc=INT_MAX;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        mic=min(mic,temp);
        mac=max(temp,mac);
    }
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        mi_nc=min(mi_nc,temp);
    }
    if(max(mac,2*mic)<mi_nc)
        cout<<max(mac,2*mic);
    else
        cout<<-1;
}