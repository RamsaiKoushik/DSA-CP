#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    unordered_map<int,int> ump;
    if(n%6==0)
        cout<<p;
    else
    {
        if(n%6==1)
        {
            ump[2]=2;ump[1]=0;ump[0]=1;
            cout<<ump[p];
        }
        else if(n%6==2)
        {
            ump[2]=0;ump[1]=2;ump[0]=1;
            cout<<ump[p];
        }
        else if(n%6==3)
        {
            ump[2]=0;ump[1]=1;ump[0]=2;
            cout<<ump[p];
        }
        else if(n%6==4)
        {
            ump[2]=1;ump[1]=0;ump[0]=2;
            cout<<ump[p];
        }
        else if(n%6==5)
        {
            ump[2]=1;ump[1]=2;ump[0]=0;
            cout<<ump[p];
        }
    }
}