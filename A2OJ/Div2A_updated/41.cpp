#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c=0;
    int temp;
    if(m>=n-1)
        cout<<n-1;
    else
    {
        c=m-1;
        temp=n-m;
        c+=(temp*(temp+1))/2;
        cout<<c<<endl;
    }
}