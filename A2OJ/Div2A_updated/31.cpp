#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int mi=INT_MAX;
    unordered_map<char,int> ump;
    for(int i=0;i<s.size();i++)
        ump[s[i]]++;
    for(int i=0;i<s.size();i++)
        mi=min(mi,ump[s[i]]);
    if(ump.size()<m)
        cout<<0;
    else
        cout<<mi*m;
}