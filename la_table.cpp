#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int bits(int a,int b)
{
    int temp1,temp2,temp=0,i=1;
    for(int j=0;j<4;j++)
    {
        temp1=a%10;
        temp2=b%10;
        temp=(temp1*temp2)*i+temp;
        i*=10;
        a/=10;
        b/=10;
    }
    return temp;
}
int xori(int a,int b)
{
    int temp1,temp2,temp;
    for(int i=0;i<4;i++)
    {
        temp1=a%10;
        temp2=b%10;
        if(i==0)
            temp=(temp1^temp2);
        else
            temp=(temp1^temp2)^temp;
        a/=10;
        b/=10;
    }
    return temp;
}
void ltable(int a[])
{
    char res_a[100],res_b[100];
    int p[16][16];
    int counta;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            counta=0;
            itoa(i,res_a,2);
            itoa(j,res_b,2);
            char res_x[100],res_y[100];
            int temp_a=atoi(res_a);
            int temp_b=atoi(res_b);
            for(int k=0;k<16;k++)
            {
                itoa(k,res_x,2);
                itoa(a[k],res_y,2);
                int temp_x=atoi(res_x);
                int temp_y=atoi(res_y);
                int r=bits(temp_x,temp_a);// a^i * X^i
                int s=bits(temp_y,temp_b);// b^i  * Y^i
                int t=xori(r,s);
                if(t==0)
                {
                     counta++;
                     cout<<counta<<endl;
                }
            }
            p[i][j]=counta-8;
        }
    }
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            cout<<p[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[16]={0xE,0x4,0xD,0x1,0x2,0xF,0xB,0x8,0x3,0xA,0x6,0xC,0x5,0x9,0x0,0x7};
    int b;
    cout<<"Enter the number"<<endl;
    cin>>b;
    cout<<"Required output for"<<b<<" is:  "<<hex<<a[b]<<endl;
    ltable(a);
    return 0;
}
