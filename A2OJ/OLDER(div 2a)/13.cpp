#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> ump1;
    unordered_map<int,int> ump2;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        ump1[x]++;
        ump2[y]++;
    }
    int c=0;
    for(auto it:ump1)
        if(ump2.find(it.first)!=ump2.end())
            c+=ump2[it.first]*ump1[it.first];
    cout<<c; 
}