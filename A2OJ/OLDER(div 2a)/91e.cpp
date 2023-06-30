#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> vec;
    for(int i=0;i<n;i++)
        if(a[i]%10==0)
            vec.push_back(a[i]);
    for(int i=0;i<n;i++)
        if(a[i]%10!=0)
        {
            vec.push_back(a[i]);
            break;
        }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}
