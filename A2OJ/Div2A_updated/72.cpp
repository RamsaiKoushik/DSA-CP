#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int temp;
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        ump[temp]++;
    }
    int c=0;
    for(auto it:ump)
        if(it.second%2!=0)  
            c++;
    cout<<n-c/2;
}