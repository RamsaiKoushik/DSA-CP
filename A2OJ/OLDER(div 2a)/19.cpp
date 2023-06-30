#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;int p,q;
    cin>>n>>p;
    int a[p],b[p];
    unordered_map<int,int> ump;
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
        ump[a[i]]++;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>b[i];
        ump[b[i]]++;
    }
    if(ump.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}