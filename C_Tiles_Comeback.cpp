#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
	    map<int, int> count;
	    vector<int> v(n);
	    for(int i = 0; i < n; i++) 
        {
	    	cin >> v[i];
	    	count[v[i]]++;
	    }
        if(v[0]==v[n-1])
        {
            if(count[v[0]] >= k && count[v[n-1]] >= k)
	        {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            } 
        }
        else
        {
            int endcount=count[v[n-1]];
            int temp=0;
            for(int i=0;i<n;i++)
            {
                if(v[i]==v[0])
                {
                    temp++;
                }
                if(temp==k)
                {
                    break;
                }
                if(v[i]==v[n-1])
                {
                    endcount--;
                }
                
            }
            if(endcount>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}