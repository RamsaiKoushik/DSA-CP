#include"bits/stdc++.h"
using namespace std;
int main()
{
    long long int n,k,m;
    cin>>n>>k>>m;
    //string s;
    //cin>>s;
    string temp;
    unordered_map<string,long long int> ump1;
    unordered_map<long long int,string> ump2;
    long long int l=1;
    for(long long int i=0;i<n;i++)
    {
        cin>>temp;
        ump1[temp]=l++;
    }
    temp="";
    long long int cost[n+1];
    for(long long int i=1;i<=n;i++)
        cin>>cost[i];
    long long int x,y;
    unordered_map<long long int,long long int> ump;
    unordered_map<long long int, priority_queue <long long int, vector<long long int>, greater<long long int> >>umpq;
    for(long long int i=0;i<k;i++)
    {
        cin>>x;
        for(long long int j=0;j<x;j++)
        {
            cin>>y;
            ump[y]=i+1;
            umpq[i+1].push(cost[y]);
            //cout<<umpq[i+1].top()<<" ";
        }
    }
    // string inp;
    // cin>>inp;
    long long int c=0;
    for(long long int i=0;i<m;i++)
    {
        cin>>temp;   
        c+=umpq[ump[ump1[temp]]].top();
        temp="";
    }
    cout<<c<<endl;
}