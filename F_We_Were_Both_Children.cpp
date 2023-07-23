#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)

    {
        int n, z;
        vector<int> a;
        map<int,int> mp;
        cin>>n;

        mp.clear();

        a=vector<int>(n+1,0);

        for (int i = 0; i < n; i++)

        {

            cin>>z;

            if (z<=n)

            {

                mp[z]++;

            }

        }

        for (int i = 1; i <= n; i++)

        {

            if (mp[i]==0) continue;

            for (int j = i; j <= n; j+=i)

            {

                a[j]+=mp[i];

            }

            

        }

        

        cout<<*max_element(a.begin(),a.end())<<'\n';

    }

    

    return 0;

}