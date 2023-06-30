#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int h=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='+')
            h++;
        else
            if(h>0)
                h--;
    cout<<h;
}