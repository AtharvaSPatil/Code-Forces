#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        string a;
        cin>>a;
        for(int i=0;i<n/2;i++)
        {
            if(a[i]!=a[n-i-1])
            count+=2;
            else
            break;
        }
        cout<<n-count<<endl;
    }
    return 0;
}