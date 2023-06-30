#include"bits/stdc++.h"
using namespace std;
int Modulo(int x)
{
    if(x<0)
        return -x;
    else
        return x;
}
int main()
{
    int n=5;
    int a[n][n];
    vector<int> v;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j])
                v={i,j};
        }
    cout<<Modulo(2-v[0])+Modulo(2-v[1]);
}