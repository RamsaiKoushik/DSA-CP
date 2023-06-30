#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int d[n];
    for(int i=0;i<n;i++)
        cin>>d[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(d[i]==2)
            continue;
        if(d[i]!=2 && d[i]!=d[n-1-i] && d[n-1-i]!=2)
        {
            cout<<-1;
            return 0;
        }
        if(d[i]!=2 && d[i]==d[n-1-i])
            continue;
        else if(d[i]!=2 && d[n-1-i]==2)
        {
            d[n-1-i]=d[i];
            if(d[i]==0)
                c+=a;
            else
                c+=b;
        }
    }
        int count =0;
        for(int i=0;i<n;i++)
            if(d[i]==2)
                count++;
        c+=count*min(a,b);
        /*if(count%2==0)
            c+=((count/2)*min(a,b));
        else
            c+=(count/2+1)*min(a,b);*/
        cout<<c;
}