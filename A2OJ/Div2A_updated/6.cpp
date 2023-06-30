#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int l,r;
    char c1,c2;
    for(int i=0;i<b;i++)
    {
        cin>>l>>r;
        cin>>c1>>c2;
        for(int i=l-1;i<=r-1;i++)
            if(s[i]==c1)
                s[i]=c2;
    }
    cout<<s;
}