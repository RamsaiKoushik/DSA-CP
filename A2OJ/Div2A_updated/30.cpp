#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp="";
    int z=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            z++;
        else
            o++;
        if(i!=n-1)
            temp+=s[i];
    }
    if(z!=o)
    {
        cout<<1<<endl;
        cout<<s;
    }
    else
    {
        cout<<2<<endl;
        cout<<temp<<" "<<s[s.size()-1];
    }
}