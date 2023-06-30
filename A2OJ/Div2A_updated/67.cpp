#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    unordered_map<char,int> ump;
    unordered_map<string, int> umpf;
    string temp="";
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
            ump[s[i]]++;
        for(auto it:ump)
            temp=temp+it.first;
        sort(temp.begin(),temp.end());
        ump.clear();
        umpf[temp]++;
        temp="";
    }
    cout<<umpf.size();
}