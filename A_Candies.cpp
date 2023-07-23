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
        int n,x;
        cin>>n;
        for(int i = 4; i <= n + 1; i *= 2) 
        {
			if(n % (i - 1) == 0) 
            {
				printf("%d\n", n / (i - 1));
				break;
			}
		}

    }

    return 0;
}