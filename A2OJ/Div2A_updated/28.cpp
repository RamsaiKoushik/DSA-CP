#include"bits/stdc++.h"
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    if(n%(2*m)<m)
        cout<<"NO";
    else
        cout<<"YES";
}