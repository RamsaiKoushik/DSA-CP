#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n==1)
        cout<<0;
    else if(n==2)
        cout<<min(a,b);
    else
        cout<<min(a,b)+(n-2)*(min({a,b,c}));
}