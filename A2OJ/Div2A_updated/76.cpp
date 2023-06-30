#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int c;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1 || n==2)
        cout<<"YES"<<endl;
    else
    {
        if(a[1]-a[0]>0)
            c=1;
        else if(a[1]==a[0])
            c=2;
        else
            c=3;
        for(int i=2;i<n;i++)
        {
            if((a[i]-a[i-1]>0 && c>1) || (a[i]==a[i-1] && c>2))
            {
                cout<<"NO"<<endl;
                return 0;
            }
            if(a[i]==a[i-1])
                c=2;
            if(a[i]-a[i-1]<0)
                c=3;
            //if((a[i]-a[i-1]>0) || a[i]==a[i-1])
                //c++;
        }
        cout<<"YES"<<endl;
    }
}