#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> ump;
    for(int i=0;i<s.size();i++)
        ump[s[i]]++;
    int o=0,z=0;
    if(ump.find('z')!=ump.end())
        z=ump['z'];
    if(ump.find('o')!=ump.end())
        o=ump['o'];
    for(int i=0;i<o-z;i++)
        cout<<1<<" ";
    for(int i=0;i<z;i++)
        cout<<0<<" ";

}