#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k=0;
    unordered_map<int,char> ump;
    string str="hello";
    for(int i=0;i<str.size();i++)
        ump[k++]=str[i];
    int l=0;
    for(int i=0;i<s.size();i++)
        if(ump.find(l)!=ump.end())
            if(ump[l]==s[i])
                l++;
    if(l==k)
        cout<<"YES";
    else   
        cout<<"NO";
        
}
