#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[100005];
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=0;
        for(int i  =1;i <= n;i++) 
        {cin>>a[i];}
        for(int i = 1;i <= n;i++) 
        {
        if(a[i] <= i) 
        {
            cout<<"YES"<<endl;
            flag=1;
        }
        }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    }

    return 0;
}