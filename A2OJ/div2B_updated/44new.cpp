#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    ll s[n],b[n],sol[n];
    for(ll i=0;i<n;i++)
    {
        cin>>s[i]>>b[i];
        sol[i]=s[i]-b[i];
    }
    ll count=0;
    map<vector<ll>,ll/*,greater<ll>*/> mp;
    vector<vector<ll>> vec;
    for(ll i=0;i<n;i++)
    {
        if(sol[i]>=0)
            count+=b[i];
        else
            vec.push_back({min(b[i],2*s[i])-s[i],i});
    }
    //cout<<count<<endl;
    sort(vec.begin(),vec.end());
    ll temp=vec.size();ll k1=0;
    for(ll i=temp-1;i>-1;i--)
    {
        if(k1==k)
            break;
        else
        {
            count+=(vec[i][0]+s[vec[i][1]]);
            //cout<<count<<" ";
            vec.pop_back();
            k1++;
        }
    }
    //cout<<endl;
    for(ll i=0;i<vec.size();i++)
    {
        count+=s[vec[i][1]];
    }
    cout<<count<<endl;
}