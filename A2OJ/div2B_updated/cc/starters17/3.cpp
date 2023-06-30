#include"bits/stdc++.h"
using namespace std;
vector<int> inversion(string x)
{
    int a[x.size()];
    int c=0;
    int p=0;
    //vector<int> vec;
    for(int i=x.size()-1;i>-1;i--)
    {
        if(x[i]=='0')
            c++;
        a[i]=c;
        if(x[i]=='1')
            p+=(a[i]);
    }
    return {p,c};
}
void solve()
{
    int n,m;
    cin>>n>>m;
    string a[n];
    int inv=0;
    map<vector<int>,vector<int>> mp;
    vector<int> vec;
    for(int i=0;i<n;i++)
        cin>>a[i];
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<endl;
    for(int i=0;i<n;i++)
    {
        vec=inversion(a[i]);
        vec.push_back(m-vec[1]);
        mp[{vec[2],i}]=vec;
        inv+=(vec[0]);
        //cout<<vec[0]<<" ";
    }
    //cout<<endl;
    //cout<<inv<<"y"<<endl;
    int x[n],y[n];
    x[n-1]=0;int k=n-2;
    map<vector<int>,vector<int>>::reverse_iterator it;
    map<vector<int>,vector<int>>::iterator it2;
    // for(auto it:mp)
    // {
    //     cout<<a[it.first[1]]<<endl;
    // }
    for(it = mp.rbegin();it!=mp.rend();it++)
    {
        if(k>-1)
            x[k]=x[k+1]+it->second[1];
        k--;
    }
    int j=0;
    for(it2 =mp.begin();it2!=mp.end();it2++)
    {
        // if(j==0)
        //     y[j]=it2->second[2];
        // else if(j<n)
        //     y[j]=y[j-1]+it2->second[2];
        // j++;
        inv+=(x[j]*it2->second[2]);
        j++;
    }
    // for(int i=0;i<n;i++)
    //     cout<<x[i]<<" ";
    // cout<<endl;
    // for(int j=0;j<n;j++)
    //     cout<<y[j]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++)
    //     inv+=(x[i]*y[i]);
    cout<<inv<<endl;   
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