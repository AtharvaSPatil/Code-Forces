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
        long long twos=1,n;
        cin>>n;
        while(twos*2<=n)
        {
            twos=twos*2;
        }
        cout<<twos-1<<endl;
    }

    return 0;
}