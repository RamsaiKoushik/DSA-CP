#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int s=0,f=0;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]=='S' && str[i+1]=='F')
            s++;
        if(str[i]=='F' && str[i+1]=='S')
            f++;
    }
    if(s>f)
        cout<<"YES";
    else
        cout<<"NO";
}