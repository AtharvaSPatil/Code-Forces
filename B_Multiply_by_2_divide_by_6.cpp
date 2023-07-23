#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        while(n>1)
        {
            if(n%6==0)
            {
                n=n/6;
                cnt++;
            }
            else
            {
                n=n*2;
                cnt++;
            }

        }
        if(n==1)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;

    }

    return 0;
}