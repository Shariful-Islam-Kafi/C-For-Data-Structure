#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c-'0'>=0 && c-'0'<=9)
    {
        cout<<"IS DIGIT";
    }
    else
    {
        if(c>='a'&&c<='z')
        {
            cout<<"ALPHA"<<endl<<"IS SMALL";
        }
        else
        {
            cout<<"ALPHA"<<endl<<"IS CAPITAL";
        }
    }
    return 0;
}


