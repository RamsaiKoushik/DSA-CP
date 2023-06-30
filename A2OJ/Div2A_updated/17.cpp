#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp;
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        ump[temp]++;
    }
    if(ump.find(0)!=ump.end())
        ump.erase(0);
    cout<<ump.size();
}