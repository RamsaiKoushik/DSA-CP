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
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            vec.push_back(i);
            ump[i]=0;
        }
    }
    if(a[n-1]%2==0 || a[0]%2==0)
        cout<<"No";   

    else 
    {
        int c=0;int temp=0;
        for(int i=2;i<vec.size();i++)
        {
            if(vec[i]-vec[i-1]==1 && (vec[i-1]-temp+1)%2!=0)
            {
                c++;
                ump.erase(vec[i-1]);
                ump.erase(temp);
                temp=vec[i];
                //ump.erase(i-1);
            }
            else if(vec[i-1]-vec[i-2]==1 && vec[i]-vec[i-1]==1)
            {
                c++;
                ump.erase(vec[i-1]);
            }
            else
            {
                ump.erase(vec[i-1]);
            }
            /*if(vec[i]-vec[i-1]==1 && vec[i-1]==temp)
            {

            }*/
        }
        int tempm1=0,tempm2=0;
        if(ump.size()==2)
        {
            for(auto it:ump)
            {
                tempm2=tempm1;
                tempm1=it.first;
            }
            tempm2=mod(tempm1-tempm2)+1;
            if(tempm2%2==0)
            {
                cout<<"NO";
                return 0;
            }
            c++;
        }
        if(ump.size()==1)
            c++;
        //if(temp==vec[vec.size()-1])
            //c++;
        cout<<c<<endl;
        if(c%2!=0 && c!=1)// || temp!=vec[vec.size()-1])
            cout<<"Yes"<<endl;
        else
            cout<<"No";
    }
}