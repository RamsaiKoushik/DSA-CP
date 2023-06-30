#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int g,k;
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
        cin>>a[i]>>g;
    cin>>k;
    int i=0;
    for(;i<n;i++)
        if(k<a[i])
            break;
    cout<<n-i+1;
}