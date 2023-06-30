#include"bits/stdc++.h"
using namespace std;
//Assuming discount is from 20 00 to 00 00
int main()
{
    //20 00;
    int h,m;
    cin>>h>>m;
    double H,D,C,N;
    cin>>H>>D>>C>>N;
    double temp;
    if(h>=20)
    {
        temp=ceil(H/N)*(0.8*C);
        printf("%0.4f\n",temp);
        //cout<<temp<<endl;
    }
    else
    {
        temp=ceil(H/N)*C;
        H+=(60*(20-h-1)+60-m)*D;
        temp=min(ceil(H/N)*(0.8*C),temp);
        printf("%.4f\n",temp);
        //cout<<temp;
    }
}