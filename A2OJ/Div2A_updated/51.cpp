#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int mark[m];
    for(int i=0;i<m;i++)
        cin>>mark[i];
    unordered_map<char,int> ump;
    int c=0,ma=INT_MIN;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            ump[s[j][i]]++;
        for(auto it:ump)
            ma=max(ma,it.second);
        c+=(ma*mark[i]);
        ma=INT_MIN;
        ump.clear();
    }
    cout<<c<<" "<<endl;
}