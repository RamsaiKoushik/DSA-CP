#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int p[n],s[n],c[k];
    int num=0;
    unordered_map<int,int> ump;
    for(int i=0;i<m;i++)
        ump[i+1]=0;
    for(int i=0;i<n;i++)
        cin>>p[i];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<k;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
        ump[s[i]]=max(ump[s[i]],p[i]);
    //for(auto it:ump)
        //cout<<it.first<<" "<<it.second<<endl;
    for(int i=0;i<k;i++)
        if(p[c[i]-1]!=ump[s[c[i]-1]])
            num++;
    cout<<num<<endl;
}