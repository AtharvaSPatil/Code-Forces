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
        int n,k,g;
        cin>>n>>k>>g;
        int stolen= min((g-1)/2*n,k*g);
        int rest = (k*g-stolen)%g;
        if(rest>0)
        {
            stolen-=(g-1)/2;
            int last = ((g-1)/2+rest)%g;

            if(last*2<g)
            {
                stolen+=last;
            }
            else
            {
                stolen-=g-last;
            }
        }
        cout<<stolen<<endl;
    }

    return 0;
}