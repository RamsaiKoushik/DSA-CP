#include"bits/stdc++.h"
using namespace std;
vector<int> Factors(vector<int>&v,int n)
{
    int x=2;
    while(x<=n)
    {
        if(n%x==0)
            v.push_back(x);
        x++;
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    vector<int> f;
    for(int i=n;i>-1;i--)
    {
        f=Factors(v,i);
        v.clear();
        if(f.size()==0)
            continue;
        if(f[f.size()-1]*i>n)
        {
            cout<<i<<" "<<f[f.size()-1];
            return 0;
        }
    }
    cout<<-1;
}