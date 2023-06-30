#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
        swap(n,m);
    if(n%2!=0 || n==1 || m==1)
        cout<<"Akshat";
    else
        cout<<"Malvika";
}