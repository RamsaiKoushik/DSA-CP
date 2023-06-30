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
bool solve()
{
    vi pushed = {1,2,3,4,5},popped={4,5,3,2,1};
    int l=0,r=0;
        bool b[1001];
        for(int i=0;i<=1000;i++)
            b[i]=false;
        stack<int> st;
        r=-1;
        cout<<l<<" "<<r<<" "<<pushed.size()<<" "<<popped.size()<<endl;
        int x=pushed.size(),y=popped.size();
        while(r<x && l<y)
        {
            cout<<"in"<<endl;
             cout<<l<<" "<<r<<endl;
            if(b[popped[l]]==true)
            {
                if(st.size() && st.top()==popped[l])
                {
                    st.pop();
                    cout<<l<<endl;
                    l++;
                }
                else
                    return false;
            }
            else
            {
                r++;
                st.push(pushed[r]);
            }
            cout<<l<<" "<<r<<endl;
        }
        if(st.size())
            return false;
        return true;
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