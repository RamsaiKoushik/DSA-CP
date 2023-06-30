#include"bits/stdc++.h"
using namespace std;
#define vi vector<int> 
#define ll long long int
int helper(int x,int y,int i,int j,string* s,int n,int m);
void inp(vector<int>&a,int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void out(vector<int>&a, int n)
{
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
} 
int inside(int x,int y,int n,int m)
{
    if((x>=0 && x<=n-1) && (y>=0 && y<=m-1))
        return 1;
    return 0;
}
int pls(int x,int y,int i,int j,string* s,int n,int m)
{
    if(inside(i,j,n,m))
    {
        if(s[i][j]!='#')
        {
            return 0;
        }
        else
            return helper(x,y,i,j,s,n,m);
    }
    else 
        return 0;
}
int helper(int x,int y,int i,int j,string* s,int n,int m)
{
    if(y==1 and x==8)
    {
        if(inside(i,j,n,m))
        {
            if(s[i][j]!='#')
            {
                return 0;
            }
            else
                return 1;
        }
        else 
            return 0;
    }
    else if(y==x+1)
    {
        if(inside(i,j,n,m))
        {
            if(s[i][j]!='#')
            {
                return 0;
            }
            else
                return 1;
        }
        else 
            return 0;
    }
    if(x==1)
    {
        return pls(x+1,y,i+1,j,s,n,m);
    }
    if(x==2)
    {
        return pls(x+1,y,i+1,j,s,n,m);
    }
    if(x==3)
    {
        return pls(x+1,y,i,j+1,s,n,m);
    }
    if(x==4)
    {
        return pls(x+1,y,i,j+1,s,n,m);
    }
    if(x==5)
    {
        return pls(x+1,y,i-1,j,s,n,m);
    }
    if(x==6)
    {
        return pls(x+1,y,i-1,j,s,n,m);
    }
    if(x==7)
    {
        return pls(x+1,y,i,j-1,s,n,m);
    }
    if(x==8)
    {
        return pls(1,y,i,j-1,s,n,m);
    }
    return 0;
}
int help(int i,int j,string* s,int n,int m)
{
    for(int k=1;k<=8;k++)
    {
        if(helper(k,k,i,j,s,n,m))
            return 1;
    }
    return 0;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    string s[m];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                if(!help(i,j,s,n,m))
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}