#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
void calculate_u(int k[],int p[],int u[],int v[],int w[],int num)
{
    for(int i=0;i<4;i++)
    {
        if(num==1)
        {
            u[i]=p[i] ^ k[i+(num-1)];
            cout<<p[i]<<"  "<<k[i+(num-1)]<< " "<<u[i]<<endl;
        }
        else if(num>1 && num<5)
            u[i]=w[i] ^ k[i+(num-1)];
        else
            u[i]=v[i] ^ k[i+(num-1)];
    }
}
void calculate_v(int a[],int u[],int v[])
{
    for(int i=0;i<4;i++)
    {
        int input=u[i];
        v[i]=a[input];
        cout<<hex<<input<<":  "<<v[i]<<endl;
    }
}
void calculate_w()
{

}


int main()
{
    int a[16]={0xE,0x4,0xD,0x1,0x2,0xF,0xB,0x8,0x3,0xA,0x6,0xC,0x5,0x9,0x0,0x7};
    int b[16]={1,5,9,13,2,6,10,14,3,7,11,0,4,8,12,16};
    int k[8]={0x5,0x8,0xD,0xE,0x1,0x4,0x6,0xA};
    int p[4]={0x3,0x7,0x1,0xC};
    int u[4],v[4],w[4];
    //for(int i=1;i<5;i++)
        calculate_u(k,p,u,v,w,1);
        calculate_v(a,u,v);



    return 0;
}
