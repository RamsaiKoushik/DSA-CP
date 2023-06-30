#include"bits/stdc++.h"
using namespace std;
#define ll long long int
long long int x1=(1000000000+7);
ll power(ll x, ll n){
    ll y=1;
    while(n>0){
        if(n%2==1){
            y*=x;
            y%=x1;
        }
        x=(x*x)%x1;
        n=n/2;
    }
    return y;
}
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r];
    int b[c];
    for(int i=0;i<r;i++)
        cin>>a[i];
    for(int i=0;i<c;i++)
        cin>>b[i];
    char ar[r][c];
    int k=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(b[i]==0 && j==0)
                ar[0][i]='0';
            else if(j==b[i] )
                ar[j][i]='0';
            else if(j>b[i])
                ar[j][i]='.';
            else  
                ar[j][i]='1';
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i]==0 && ar[i][0]=='1')
            {
                cout<<0<<endl;
                return 0;
            }
            else if(j<a[i] && ar[i][j]=='0')
            {
                cout<<0<<endl;
                return 0;
            }
            else if(j==a[i]&& ar[i][j]=='1')
            {
                cout<<0<<endl;
                return 0;
            }
            else if(j==a[i])
            {
                ar[i][j]='0';
            }
            else if(j<a[i])
            {
                ar[i][j]='1';
            }
        }
    }
    int temp=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(ar[i][j]=='.')
                temp++;
    long long int co=power(2,temp)%x1;
    //cout<<"work";
    cout<<co;
}
/*int main()
{
    int r,c;
    cin>>r>>c;
    int a[r];
    int b[c];
    for(int i=0;i<r;i++)
        cin>>a[i];
    for(int i=0;i<c;i++)
        cin>>b[i];
    char ar[r][c];
    int k=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(b[i]==0 && j==0)
                ar[0][i]='0';
            else if(j==b[i] )
                ar[j][i]='0';
            else if(j>b[i])
                ar[j][i]='.';
            else  
                ar[j][i]='1';
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i]==0 && ar[i][0]=='1')
            {
                cout<<0<<endl;
                return 0;
            }
            else if(j<a[i] && ar[i][j]=='0')
            {
                cout<<0<<endl;
                return 0;
            }
            else if(j==a[i]&& ar[i][j]=='1')
            {
                cout<<0<<endl;
                return 0;
            }
            else if(j==a[i])
            {
                ar[i][j]='0';
            }
            else if(j<a[i])
            {
                ar[i][j]='1';
            }
        }
    }
    int temp=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(ar[i][j]=='.')
                temp++;
    //int count=power(2,temp)%x1;
    //cout<<power(2,temp)%x1;
    ll x=pow(2,temp);
    cout<<x%x1<<endl;
}*/