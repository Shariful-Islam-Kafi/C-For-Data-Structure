#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mn=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[0+i]>ar[i+1])
        {
            swap(ar[i],ar[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}


