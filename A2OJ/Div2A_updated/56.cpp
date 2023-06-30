#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()<3)
        cout<<"No";
    else
    {
        for(int i=0;i<s.size()-2;i++)
        {
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2] && s[i]!='.'&&s[i+1]!='.'&& s[i+2]!='.')
            {
                cout<<"Yes";
                return 0;
            }
        }
        cout<<"No";
    }
}