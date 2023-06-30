#include"bits/stdc++.h"
using namespace std;
int main()
{
    int k;
    cin>>k;
    int n;
    int temp;
    int c=0;
    int ma=INT_MIN;
    vector<int> vec;
    for(int i=0;i<k;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>temp;
            vec.push_back(temp);
        }
        sort(vec.begin(),vec.end());
        for(int j=n-1;j>-1;j--)
        {
            c++;
            ma=max(ma,min(vec[j],c));
        }
        cout<<ma<<endl;
        c=0;
        vec.clear();
        ma=INT_MIN; 
    }
}