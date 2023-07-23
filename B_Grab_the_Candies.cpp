#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // int n,e=0,o=0,z;
        // cin>>n;
        // for(int i=0;i<n;i++)
        // {
        //     cin>>z;
        //     if(z%2==0)
        //     e+=z;
        //     else
        //     o+=z;
        // }
        // if(e>o)
        // cout<<"YES"<<endl;
        // else
        // cout<<"NO"<<endl;
    int n;
    cin >> n;
    int x, odd = 0, even = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x%2 == 0)
        {
            even+=x;
        }
        else
        {
            odd+=x;
        }
    }
    if(even > odd)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    }

    return 0;
}