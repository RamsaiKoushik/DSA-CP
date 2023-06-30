#include"bits/stdc++.h"
using namespace std;
int mod(int x)
{
    if(x<0)
        return -x;
    else
        return x;
}
int main()
{
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    int ta,fa,tb,fb;
    int t=0;
    for(int i=0;i<k;i++)
    {
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb)
        {
            cout<<mod(fa-fb)<<endl;
            continue;
        }
        else if(a<=fa && fa<=b)
            t = mod(ta-tb)+mod(fa-fb);
        else
        {
            t=min(mod(fa-a)+mod(fb-a),mod(fa-b)+mod(fb-b))+mod(ta-tb);
            //cout<<min(mod(fa-a)+mod(fb-a),mod(fa-b)+mod(fb-b))<<endl;
        }
        cout<<t<<endl;
    }
}