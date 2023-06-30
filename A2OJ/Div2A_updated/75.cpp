#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    cin>>s;
    //unordered_map<int,string> ump;
    //ump[10]="10:01";
    char h1=s[0],h2=s[1],m1=s[3],m2=s[4];
    char t1,t2;
    if(h1==m2 && h2==m1)
        cout<<0<<endl;
    else
    {
        if((h2>m1 || h2==m1 && h1>m2) && h2<'6')
        {
            if(h1>m2)
                cout<<(h2-m1)*10+h1-m2;
            else
                cout<<(h2-m1-1)*10+10+h1-m2;
        }  
        else
        {
            if(h1=='2' && h2=='3')
                cout<<60-(m1-48)*10-(m2-48);
            else if(h2<'5')
                cout<<60+(h2+1-48)*10+(h1-48)-(m1-48)*10-(m2-48);
            else
            {
                t1=h1+1;
                t2='0';
                if((t2-48)*10+(t1-48)-(m1-48)*10-(m2-48)>=0)
                    cout<<(10-(h2-48))*60+(t2-48)*10+(t1-48)-(m1-48)*10-(m2-48);
                else
                {
                    cout<<(10-(h2-48)-1)*60+60+(t2-48)*10+(t1-48)-(m1-48)*10-(m2-48)<<endl;
                    //cout<<(10-(h2-48)-1)<<" "<<(t2-48)*10+(t1-48)<<" "<<-(m1-48)*10-(m2-48)<<endl;
                }
            }
        }
    }
}