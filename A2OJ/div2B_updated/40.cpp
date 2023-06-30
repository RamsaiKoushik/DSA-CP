#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];int b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int c=1;
    c+=min(a[0],b[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>b[i-1])
        {
            if(a[i-1]>b[i])
                continue;
            else if(a[i-1]==b[i-1])
                c++;
            else
            {
                c++;
                c+=min(b[i]-a[i-1],a[i]-a[i-1]);
            }
        }
        else if(a[i-1]==b[i-1])
        {
            c+=min(b[i]-b[i-1],a[i]-a[i-1]);
        }
        else
        {
            if(b[i-1]>a[i])
                continue;
            else if(a[i-1]==b[i-1])
                c++;
            else
            {
                c++;
                c+=min(a[i]-b[i-1],b[i]-b[i-1]);
            }
        }
    }
    cout<<c<<endl;
}