#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,j;
    i=j=(s.size()-1)/2;
    char a[s.size()];
    a[i]=s[0];
    if(s.size()%2)
    {
        for(int k=1;k<s.size();k++)
        {
            if(k%2)
                a[--i]=s[k];
            else
                a[++j]=s[k];
        }
    }
    else
    {
        for(int k=1;k<s.size();k++)
        {
            if(k%2)
                a[++j]=s[k];
            else
                a[--i]=s[k];
        }
    }
    for(int i=0;i<s.size();i++)
        cout<<a[i];
    cout<<endl;
}