#include"bits/stdc++.h"
using namespace std;
int mod(int x)
{
    if(x<0)
        return -x;
    return x;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> vec;
    //unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            vec.push_back(i);
            //ump[i]=0;
        }
    }
    if(a[n-1]%2==0 || a[0]%2==0)
        cout<<"No";   
    else
    {
        //for(int i=)
    }
}