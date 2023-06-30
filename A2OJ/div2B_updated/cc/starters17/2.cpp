#include"bits/stdc++.h"
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=1;i<n;i++)
        if(__gcd(b[i-1],b[i])!=b[i])
        {
            cout<<-1<<endl;
            return;
        }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}