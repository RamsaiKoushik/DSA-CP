#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    unordered_map<char,int> ump;
    for(int i=0;i<s.size();i++)
        ump[s[i]]++;
    if(s.size()<k)
        cout<<"impossible";
    else if(ump.size()>=k)
        cout<<0;
    else
        cout<<k-ump.size();
}