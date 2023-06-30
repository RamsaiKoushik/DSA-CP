#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    ll n,m;
    ll o1=0,o2=0,e1=0,e2=0;    
    for(int i=0;i<t;i++)
    {
        cin>>n;
        ll a[n];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]%2!=0)
                o1++;
            else
                e1++;   
        }
        cin>>m;
        ll b[m];
        for(ll j=0;j<m;j++)
        {
            cin>>b[j];
            if(b[j]%2!=0)
                o2++;
            else
                e2++;  
        } 
        /*for(int j=0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl;
        for(int j=0;j<m;j++)
            cout<<b[j]<<" ";
        cout<<endl;*/
        //cout<<o1<<" "<<o2<<" "<<e1<<" "<<e2<<endl;  
        cout<<o1*o2+e1*e2<<endl;
        o1=0;o2=0;e1=0;e2=0;
    }
}