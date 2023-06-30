#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int LIF(int x,int y)
{
    if(x%y!=0)
        return x/y+1;
    else
        return x/y;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    unordered_map<char,vector<int>> ump;
    ump['+']={};ump['-']={};ump['0']={};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
            ump['+'].push_back(a[i]);
        else if(a[i]<0)
            ump['-'].push_back(a[i]);
        else
            ump['0'].push_back(a[i]);
    }
    if(ump['+'].size()>=LIF(n,2))
        cout<<ump['+'][0];
    else if(ump['-'].size()>=LIF(n,2))
        cout<<ump['-'][0];
    else
        cout<<0<<endl;
    //cout<<ump['-'].size();
}