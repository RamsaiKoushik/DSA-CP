#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++)
        cin>>a[i];
    sort(a,a+2*n);
    int s1,s2;
    s1=s2=0;
    for(int i=0;i<2*n;i++)
        if(i<n)
            s1+=a[i];
        else
            s2+=a[i];
    //cout<<s1<<" "<<s2<<endl;
    if(s1==s2)
        cout<<-1;
    else
        for(int i=0;i<2*n;i++)
            cout<<a[i]<<" ";
    
}