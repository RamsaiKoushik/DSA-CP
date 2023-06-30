#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        float a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        if(ceil(a/c)+ceil(b/d)>k)
            cout<<-1<<endl;
        else
            cout<<ceil(a/c)<<" "<<ceil(b/d)<<endl;
    }
}