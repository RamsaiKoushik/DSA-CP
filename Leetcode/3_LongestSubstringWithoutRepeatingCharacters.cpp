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
    string s = "geeksforgeeks";
    unordered_map<char,int> ump;
        int n=s.size();
        int l,r=0;
        int len=1;
        ump[s[0]]=1;
        while(l<n || r<n)
        {
            if(r+1<n && ump.find(s[r+1])==ump.end())
            {
                r++;
                ump[s[r]]++;
                len=max(len,r-l+1);
                // cout<<l<<" "<<r<<endl;
            }
            else if(l+1<n)
            {
                ump[s[l]]--;
                if(ump[s[l]]==0)
                    ump.erase(s[l]);
                l++;
            }
            else
                break;
        }
        cout<<len<<endl;
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