#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ma;
    int a[n][m];
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            a[i][j]=s[i][j]-48;
    unordered_map<int,int> ump;
    for(int j=0;j<m;j++)
    {
        ma=INT_MIN;
        for(int i=0;i<n;i++)
                ma=max(ma,a[i][j]);
        for(int i=0;i<n;i++)
            if(a[i][j]==ma)
                ump[i]++;
    }
    cout<<ump.size();
}