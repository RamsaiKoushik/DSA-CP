#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%10==0)
        cout<<n;
    else
        if(n%10<=5)
            cout<<(n/10)*10;
        else
            cout<<((n/10)+1)*10;
}