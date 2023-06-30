#include"bits/stdc++.h"
using namespace std;
int level(vector<int>& dp,int a,int b,int c,int i,int n,vector<bool>& bl)
{
    if(i>n)
        return -1;
    if(bl[i]==true)
        if(dp[i]!=-1)
            return 1+dp[i];
        else
            return -1;
    dp[i]=max({level(dp,a,b,c,i+a,n,bl),level(dp,a,b,c,i+b,n,bl),level(dp,a,b,c,i+c,n,bl)});
    bl[i]=true;
    //cout<<i<<" "<<dp[i];
    if(dp[i]==-1)
        return -1;
    return 1+dp[i];
}
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> dp(n+1,-1);
    dp[n]=0;
    //bl[n]=true;
    vector<bool> bl(n+1,false);
    bl[n]=true;
    level(dp,a,b,c,0,n,bl);
    cout<<dp[0]<<endl;
    //for(int i=0;i<n+1;i++)
        //cout<<dp[i]<<" ";
    
}