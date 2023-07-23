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
        int n,count=0,max_count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max_len = 0, start = 0;
        for(int i=0; i<n; i++) {
        if(arr[i] == 1) {
            if(i - start > max_len) {
                max_len = i - start;
            }
            start = i + 1;
        }
    }
    if(n - start > max_len) {
        max_len = n - start;
    }
        cout<<max_len<<endl;
    }

    return 0;
}