#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    int temp=0;
    int f1,f2,l1,l2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(a[i][j]=='B')
            {
                f1=i;
                f2=j;
                temp=1;
                break;
            }
        if(temp)
            break;
    }
    temp=0;
    for(int i=n-1;i>-1;i--)
    {
        for(int j=m-1;j>-1;j--)
            if(a[i][j]=='B')
            {
                l1=i;
                l2=j;
                temp=1;
                break;
            }
        if(temp)
            break;
    }
    cout<<(f1+l1)/2+1<<" "<<(f2+l2)/2+1;
}