#include"bits/stdc++.h"
using namespace std;
int color(int a,int b)
{
    if((a%2==0 && b%2==0) || (a%2==1 && b%2==1 ))
        return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int c1=color(a,b),c2=color(c,d);
        if(a==c && b==d)
            cout<<0<<endl;
        else if(c1==c2)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
}