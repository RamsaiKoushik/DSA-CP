#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    ll max_s;
    max_s=(n-r+1)*pow(2,r-1);
    int temp=r-1;
    while(temp--)
        max_s+=pow(2,temp);
    int min_s=n-l+1;
    temp=l-1;
    int k=1;
    while(k<=temp)
    {
        min_s+=pow(2,k);
        k++;
    }
    cout<<min_s<<" "<<max_s;
}