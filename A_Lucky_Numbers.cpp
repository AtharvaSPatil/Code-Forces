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
        int l,r;
        cin>>l>>r;
        int ans=l,maxi=0;
        for(int i=l;i<=r;i++)
        {
            string num= to_string(i);
            sort(num.begin(),num.end());
            int curr = num[num.length()-1] - num[0];
            if(curr>maxi)
            {
                maxi=curr;
                ans=i;
            }
            if(maxi==9)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}