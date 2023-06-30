#include"bits/stdc++.h"
using namespace std;
int Help(int a,int b,int c)
{
    int d;
    if(a<c)
    {
        if(c>=2*a)
            d=2*a;
        else
            if(c%2==0)
                d=c+(a-c/2);
            else
                d=c+(a-c/2-1);
        //d=a+min(c-a,a);
    }
     else
        d=a+c/2;
    return d;
}
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    int d=0;
    int temp;int t1,t2;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a==b && b==c)
        {
            d=1;
            d+=Help(a-1,b-1,c);
            cout<<d<<endl;
        }
        else if(a==b || b==c || c==a)
        {
            if(a==b)
                d=Help(a,b,c);
            if(c==b)
                d=Help(b,c,a);
            if(a==c)
                d=Help(a,c,b);
            cout<<d<<endl;
        }
        else
        {
            t1=min({a,b,c});
            t2=max({a,b,c});
            if(a!=t1 && a!=t2)
                temp=a;
            else if(b!=t1 && b!=t2)
                temp=b;
            else if(c!=t1 && c!=t2)
                temp=c;
            //d=temp+min(t2-temp,t1);
            d=temp-t1;
            t2=t2-(temp-t1);
            temp=t1;
            //cout<<d<<" "<<t2<<endl;
            d=d+Help(t1,temp,t2);
            cout<<d<<endl;
        }
    }
}