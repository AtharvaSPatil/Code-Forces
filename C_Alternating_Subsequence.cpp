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
		cin >> n;
		int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        set<int> s;
        int i=0,sum=0;
        while(i<n)
        {
            if(a[i]<0)
            {
                while(a[i]<0 && i<n)
                {
                    s.insert(a[i]);
                    i++;
                }
            }
            else
            {
                while(a[i]>0 && i<n)
                {
                    s.insert(a[i]);
                    i++;
                }
            }
            auto it=s.rbegin();
            sum+=*it;
            s.clear();
        }
        cout<<sum<<endl;
		
    }

    return 0;
}