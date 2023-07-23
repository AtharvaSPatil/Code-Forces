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
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int input;
            cin>>input;
            v.push_back(input);
        }
        if(n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=1;i<n-1;i++)
            {
                int temp=v[i-1]-v[i];
                v[i]=v[i]+temp;
                v[i+1]=v[i+1]+temp;
            }
            if(v[n-1]<v[n-2])
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }

    }

    return 0;
}