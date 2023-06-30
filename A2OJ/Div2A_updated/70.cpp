#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    int temp=0;
    vector<int> vec;
    for(int z=0;z<t;z++)
    {   
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];   
            c[i]=b[i]-a[i];
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
                        cout<<vec.size();
                        cout<<c[i]<<" "<<c[vec[vec.size()-1]]<<" "<<vec[vec.size()-1];
                        cout<<"NO"<<endl;
                        temp=1;
                        break;
                    }
                }
                else
                    vec.push_back(i);
            }
        }
        //cout<<"g2";
        if(temp)
        {
            temp=0;
            vec.clear();
            continue;
        }
        //cout<<vec.size()<<endl;
        /*if(!vec.size())
        {
            cout<<"YES"<<endl;
            vec.clear();
            continue;
        }*/
        //cout<<vec.size()<<endl;
        //cout<<"yes"<<endl;
        /*for(int i=0;i<vec.size();i++)
        {
            cout<<"vec"<<" ";
            cout<<vec[i]<<" ";//<<endl;
        }*/
        for(int i=0;i<vec.size();i++)
        {
            if(i==vec.size()-1)
                continue;
            //cout<<i<<" ";//<<endl;
            if(vec[i+1]-vec[i]!=1)
            {
                //cout<<vec.size()<<endl;
                //cout<<endl;
                //cout<<vec[i+1]<<" "<<vec[i]<<" "<<i+1<<" "<<i<<endl;
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