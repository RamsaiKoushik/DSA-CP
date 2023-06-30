#include"bits/stdc++.h"
using namespace std;
bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[i].push_back(x);
        vec[i].push_back(y);                                             
    }
    map<int,int> mp;
    map<int, int>::iterator itr,x,y;
    for(int i=0;i<vec.size();i++)
        mp[vec[i][0]]=vec[i][1];
    for(itr = mp.begin();itr!=mp.end();itr++)
    {
        y=itr;
        x=++y;
        if(x!=mp.end())
        {
            if(itr->second>x->second)
            {
                cout<<"Happy Alex"<<endl;
                return 0;
            }
        }
    }
    cout<<"Poor Alex";
}