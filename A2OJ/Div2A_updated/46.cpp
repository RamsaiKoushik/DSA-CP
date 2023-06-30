#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,n;
    int c=2;
    int temp;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>n;
        if(n==0)
            cout<<a<<endl;
        else if(n==1)
            cout<<b<<endl;
        else if(n%3==2)
            cout<< (a^b) <<endl;
        else if(n%3==0)
            cout<<a<<endl;
        else
            cout<<b<<endl;
        
    }
}
/*else if(a==b)
        {
            if(n%3==2)
                cout<<0<<endl;
            else    
                cout<<a<<endl;
        }
        else if(a==0 && b==0)
            cout<<0<<endl;
        else if(a==0)
        {
            if(n%3==0)
                cout<<0<<endl;
            else
                cout<<b<<endl;
        }
        else if(b==0)
        {
            if(n%3==1)
                cout<<0<<endl;
            else
                cout<<a<<endl;
        }
        else 
        {
            temp=a^b;
            while(c<n)
            {
                a=b;
                b=temp;
                temp=a^b;
                c++;
            }
            cout<<temp<<endl;
        }*/