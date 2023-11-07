#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        char x[t];
        int counter[26]={0};
        cin>>x;
        for(int j=0;j<strlen(x);j++)
        {
            counter[x[j]-'A']++;
        }
        for(int j='A';j<='Z';j++)
        {
            if(counter[j]-'0'>0)
            {
                cout<<counter[i]<<endl;
            }
        }
    }
    return 0;
}


