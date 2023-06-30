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
    int c=0;int temp;
    bool b[n]={false};
    for(int i=0;i<n;i++)
    {
        if(!b[i])
        {
            for(int j=0;j<n;j++)
                if(a[j]%a[i]==0)
                b[j]=true;
            c++;
        }
    }
    cout<<c;
}
//sort(a,a+n);
    /*map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[a[i]]++;*/
/*while(mp.size())
    {
        for(auto it:mp)
        {
            temp=it.first;
            for(auto x:mp)
            {
                if(temp%x.first==0)
                    mp.erase(x.first);
            }
            c++;
            //mp.erase(it.first);
        }
    }*/