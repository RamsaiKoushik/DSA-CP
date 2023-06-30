#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=0,j=n-1;
    int s1=0,s2=0;
    int k;
    while(i<=j)
    {
        if(s2>s1)
        {
            s1+=a[i];
            //cout<<s1<<" "<<i<<"i"<<endl;
            i++;
        }
        else
        {
            s2+=a[j];
            k=j;
            //cout<<s2<<"j"<<endl;
            j--;
        }
    }
    if(s1>=s2)
        k--;
    cout<<n-k;
}