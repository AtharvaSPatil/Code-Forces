#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]%2!=0)
                {
                    count++;
                }
            }
            cout<<abs(n/2-count)<<endl;
            
        }
    }

    return 0;
}