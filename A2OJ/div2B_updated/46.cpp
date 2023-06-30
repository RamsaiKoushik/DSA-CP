#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> vec1={31,28,31,30,31,30,31,31,30,31,30,31,
                    31,29,31,30,31,30,31,31,30,31,30,31,
                    31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<vec1.size();i++)
    {
        if(a[0]==vec1[i])
        {
            for(int j=0;j<n;j++)
            {
                if(a[j]!=vec1[(i+j)%(vec1.size())])
                    break;
                if(j==n-1)
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
}