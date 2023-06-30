#include"bits/stdc++.h"
using namespace std;
int main()
{
    char i,e;
    cin>>i>>e;
    long long int n;
    cin>>n;
    if(n%4==2 || n%4==0)
        cout<<"undefined";
    else if(n%4==1)
    {
        if(i==118 && e==60)
            cout<<"cw";
        else if(i==118 && e==62)
            cout<<"ccw";
        else if(i==94 && e==62)
            cout<<"cw";
        else if(i==94 && e==60)
            cout<<"ccw";
        else if(i==60 && e==94)
            cout<<"cw";
        else if(i==60 && e==118)
            cout<<"ccw";
        else if(i==62 && e==118)
            cout<<"cw";
        else if(i==62 && e==94)
            cout<<"ccw";
    }
    else
    {
        if(i==118 && e==60)
            cout<<"ccw";
        else if(i==118 && e==62)
            cout<<"cw";
        else if(i==94 && e==62)
            cout<<"ccw";
        else if(i==94 && e==60)
            cout<<"cw";
        else if(i==60 && e==94)
            cout<<"ccw";
        else if(i==60 && e==118)
            cout<<"cw";
        else if(i==62 && e==118)
            cout<<"ccw";
        else if(i==62 && e==94)
            cout<<"cw";

    }
}