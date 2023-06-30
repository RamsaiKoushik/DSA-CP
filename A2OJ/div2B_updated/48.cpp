#include"bits/stdc++.h"
using namespace std;
#define vi vector<int> 
#define ll long long 
void inp(vector<int>&a,int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void out(vector<int>&a, int n)
{
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
} 
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    inp(a,n);
    unordered_map<int,int> ump;
    int ma,mi;
    ma=n;mi=0;
    vi p(n);
    for(int i=0;i<n;i++)
    {
        p[a[i]-1]=i;
    }
    for(int i=0;i<n;i++)
    {
        ma=max(ma,p[i]);
        mi=min(mi,p[i]);
        if(ma-mi==i)
        {
            ump[i]=1;
        }
        else
            ump[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ump[i];
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}