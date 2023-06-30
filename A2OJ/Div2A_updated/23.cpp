#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int temp;
    int e1=0,e2=0,o1=0,o2=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp%2==0)
            e1++;
        else
            o1++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        if(temp%2==0)
            e2++;
        else
            o2++;
    }
    cout<<min(e1,o2)+min(e2,o1);
}