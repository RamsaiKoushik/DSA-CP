#include"bits/stdc++.h"
using namespace std;
int main()
{
    long long int n,a,b,c,t;
    cin>>n>>a>>b>>c>>t;
    vector<int> vec;
    map<long long int,long long int> mp;
    long long int temp;
    for(long long int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
        mp[temp]++;
    }
    sort(vec.begin(),vec.end());
    // for(long long int i=0;i<n;i++)
    //     cout<<vec[i]<<" ";
    // cout<<endl;
    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {
        if(it->first<=t)
            break;
        else
            mp.erase(it->first);
    }
    for(long long int i=n-1;i>-1;i--)
        if(vec[i]<=t)
            break;
        else
            vec.pop_back();
    long long int cost=0;
    long long int k=0;
    if(b==c)
        cout<<vec.size()*a;
    else if(b<c)
    {
        for(long long int i=0;i<vec.size();i++)   
        {
            cost+=(a+(t-vec[i])*(-b));
            cost+=(t-vec[i])*c;
        }
        //cost+=c*((vec.size()-1)*(vec.size()-1+1))/2;
        cout<<cost<<endl;

        /*for(auto it:mp)
        {
            cost+=it.second*it.first*c;
            k+=it.second;
        }
        cost-= (mp.rbegin()->second)*(mp.rbegin()->first)*c;
        cout<<cost<<endl;*/
    }
    else
    {
        cost=vec.size()*a;
        cout<<cost<<endl;
    }
}