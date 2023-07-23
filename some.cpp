#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int l[n],r[n];
        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
        }
        if(l[n]==k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}