#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    unordered_map<string,string> ump;
    ump["orange"]="Soul";
    ump["purple"]="Power";
    ump["green"]="Time";
    ump["blue"]="Space";
    ump["red"]="Reality";
    ump["yellow"]="Mind";
    for(int i=0;i<n;i++)
    {
        cin>>s;
        ump.erase(s);
    }
    cout<<ump.size()<<endl;
    for(auto it:ump)
        cout<<it.second<<endl;
}