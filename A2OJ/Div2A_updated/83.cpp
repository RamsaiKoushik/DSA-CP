#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    priority_queue<int> pq;
    int temp=n;
    int temp2,x;
    for(int i=0;i<n;i++)
    {
        if(a[i]<temp)
            pq.push(a[i]);
        else if(a[i]==temp)
        {
            cout<<a[i]<<" ";
            temp-=1;
            x=pq.size();
            for(int i=0;i<x;i++)
            {
                temp2=pq.top();
                if(temp2==temp)
                {
                    cout<<temp2<<" ";
                    temp-=1;
                    pq.pop();
                }
                else
                    break;
            }
        }
        cout<<endl;
    }
}