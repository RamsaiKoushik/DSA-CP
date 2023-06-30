#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,d;
    int s=0;
    int r1;
    int rank=1;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        s=a+b+c+d;
        if(i==0)
            r1=s;
        else if(r1<s)
            rank++;
    }
    cout<<rank;
}