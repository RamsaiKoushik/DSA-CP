#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ump[i+1]=a[i];
    }
    int c=0,k;
    for(int i=1;i<=n;i++)
        if(i==ump[ump[ump[i]]])
        {
            cout<<"YES";
            return 0;
        }
    cout<<"NO";
}