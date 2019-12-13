#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string HexToBin(string hexdec)
{
    long int i = 0;
    string temp="";
    while (hexdec[i]) {

        switch (hexdec[i]) {
        case '0':
            temp+= "0000";
            break;
        case '1':
            temp+= "0001";
            break;
        case '2':
            temp+= "0010";
            break;
        case '3':
            temp+= "0011";
            break;
        case '4':
            temp+= "0100";
            break;
        case '5':
            temp+= "0101";
            break;
        case '6':
            temp+= "0110";
            break;
        case '7':
            temp+= "0111";
            break;
        case '8':
            temp+= "1000";
            break;
        case '9':
            temp+= "1001";
            break;
        case 'A':
        case 'a':
            temp+= "1010";
            break;
        case 'B':
        case 'b':
            temp+= "1011";
            break;
        case 'C':
        case 'c':
            temp+= "1100";
            break;
        case 'D':
        case 'd':
            temp+= "1101";
            break;
        case 'E':
        case 'e':
            temp+= "1110";
            break;
        case 'F':
        case 'f':
            temp+= "1111";
            break;
        default:
            cout << "\nInvalid hexadecimal digit "
                 << hexdec[i];
        }
        i++;
    }
    return temp;
}
string BinToHex(string bin)
{
    long int i = 0;
    string temp="";

        if(bin == "0000")
            temp= "0";
        else if(bin == "0001")
            temp= "1";
        else if(bin == "0010")
            temp="2";
        else if(bin == "0011")
            temp= "3";
        else if(bin == "0100")
            temp="4";
        else if(bin == "0101")
            temp= "5";
        else if(bin == "0110")
            temp="6";
        else if(bin == "0111")
            temp= "7";
        else if(bin == "1000")
            temp="8";
        else if(bin == "1001")
            temp= "9";
        else if(bin == "1010")
            temp="A";
        else if(bin == "1011")
            temp= "B";
        else if(bin == "1100")
            temp="C";
        else if(bin == "1101")
            temp="D";
        else if(bin == "1110")
            temp="E";
        else if(bin == "1111")
            temp= "F";
        else
            cout << "\nInvalid hexadecimal digit ";
    return temp;
}
string permutation(string s)
{
        int b[16]={1,5,9,13,2,6,10,14,3,7,11,15,4,8,12,16};
        string temp="";
        for(int i=0;i<16;i++)
        {
            temp+=s[b[i]-1];
        }
        return temp;
}
string stringtohex(string p)
{
    string s="";
    string t="";
    int a[4];
    for(int i=0;i<4;i++)
    {
        s="";
        for(int j=0;j<4;j++)
        {
            s+=p[(i*4)+j];
        }
        s=BinToHex(s);
        t+=s;
    }
    return t;
}
int main()
{
    string a="5af3";
    string s=HexToBin(a);
    string p=permutation(s);
    string t=stringtohex(p);
    cout<<s<<" "<<p<<" "<<t<<endl;

    return 0;
}
