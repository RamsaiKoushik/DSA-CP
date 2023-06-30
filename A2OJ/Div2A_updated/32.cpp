#include"bits/stdc++.h"
using namespace std;
int MOD(int a,int b)
{
    if(a-b<0)
        return b-a;
    else
        return a-b;
}
int main()
{
    int t;
    cin>>t;
    int a,b,temp;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        temp=MOD(a,b);
        cout<<temp/5+(temp%5)/2+(temp-(temp/5)*5-((temp%5)/2)*2)<<endl;
    }
}