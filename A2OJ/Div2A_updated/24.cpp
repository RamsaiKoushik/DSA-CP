#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> ump;
    int f1=1,f2=1,f3;
    ump[f1]=0;ump[f2]=0;
    while(f2<=1000)
    {
        f3=f1+f2;
        ump[f3]=0;
        f1=f2;
        f2=f3;
    }
    string s="";
    for(int i=0;i<n;i++)
    {
        if(ump.find(i+1)!=ump.end())
            s+='O';
        else
            s+='o';
    }
    cout<<s;
}