#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long promax=INT_MIN,maxi=INT_MIN,mn=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            maxi=max(maxi,min(a[i],a[i+1])*max(a[i],a[i+1]));
        }
        cout<<maxi<<endl;
    }
    return 0;
}