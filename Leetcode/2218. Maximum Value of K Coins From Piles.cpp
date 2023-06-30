#include"bits/stdc++.h"
using namespace std;
#define vi vector<int> 
#define ll long long 
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
void solve()
{
    // vector<vector<int>> piles = {{1,100,3},{7,8,9}};
    vector<vector<int>> piles = {{100},{100},{100},{100},{100},{100},{1,1,1,1,1,1,700}};
    int k=7;
    int numPiles = piles.size();
        priority_queue<vector<int>> pq;
        for(int i=0;i<numPiles;i++)
        {
            vector<int> sol;
            sol.push_back(piles[i][0]);
            int s = piles[i].size();
            for(int j=1;j<s;j++)
            {
                pq.push({sol[j-1],j});
                sol[j]=sol[j-1]+piles[i][j];
            }
            pq.push({sol[s-1],s});
        }
        int sum=0;
        while(k && pq.size())
        {
            int temp = pq.top()[0];
            int ops = pq.top()[1];
            if(k>=ops)
            {
                sum+=temp;
                k-=ops;
            }
            pq.pop();
        }
        cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}