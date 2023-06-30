#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ump[a[i]]=i+1;
    }
    for(int j=1;j<=n;j++)
        cout<<ump[j]<<" ";
}