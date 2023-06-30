#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int temp=0;
    vector<int> vec;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
            c[i]=b[i]-a[i];
        for(int i=0;i<n;i++)
        {
            if(c[i]<0)
            {
                cout<<"NO"<<endl;
                temp=1;
                break;
            }
            else if(c[i]!=0)
            {
                if(vec.size())
                {
                    if(c[i]==c[vec[0]])
                        vec.push_back(i);
                    else
                    {
                        cout<<"NO"<<endl;
                        temp=1;
                        break;
                    } 
                }       
                else
                    vec.push_back(i);
            }
        }
        if(temp)
        {
            temp=0;
            vec.clear();
            continue;
        }
        //cout<<vec.size()-1;
        for(int i=0;i<vec.size();i++)
        {
            if(i== vec.size()-1 )
                continue;
            if((vec[i+1]-vec[i])!=1)
            {
                cout<<"NO"<<endl;
                temp=1;
                break;
            }  
        }
        if(temp)
        {
            temp=0;
            vec.clear();
            continue;
        }
        cout<<"YES"<<endl;
        vec.clear();
    }
}