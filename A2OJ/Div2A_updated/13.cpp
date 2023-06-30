#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int temp;
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        ump[temp]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(ump.find(a[i])!=ump.end())
        {
            cout<<a[i]<<" ";
            ump.erase(a[i]);
        }
    }
}