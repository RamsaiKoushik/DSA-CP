#include"bits/stdc++.h"
using namespace std;
int Mod(int x)
{
    if(x<0) return -x;
    else    return x;
}
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
        cout<<x1+Mod(y1-y2)<<" "<<y1<<" "<<x2+Mod(y1-y2)<<" "<<y2;
    else if(y1==y2)
        cout<<x1<<" "<<y1+Mod(x1-x2)<<" "<<x2<<" "<<y2+Mod(x1-x2);
    else
        if(Mod(x1-x2)==Mod(y1-y2))
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        else
            cout<<-1;
}