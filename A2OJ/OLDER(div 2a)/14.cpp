#include"bits/stdc++.h"
using namespace std;
bool isWub(string s,int i)
{
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        return true;
    else 
        return false;
}
int main()
{
    string s;
    cin>>s;
    string o;
    char temp;
    for(int i=0;i<s.size();i++)
    {
        temp=s[i];
        if(isWub(s,i))
        {
            o+=" ";
            i=i+2;
        }
        else
            o+=temp;
    }
    string fin;
    int k;
    for(int i=0;i<o.size();i++)
        if(o[i]!=' ')
        {
            k=i;break;
        }
    int j;
    for(int i=o.size()-1;i>-1;i--)
        if(o[i]!=' ')
        {
            j=i;
            break;
        }
    fin=o[k];
    for(int i=k+1;i<=j;i++)
    {
        int x=i-1;
        if(o[x]==' ' && o[i]==' ')
            continue;
        fin+=o[i];
    }
    cout<<fin;
}