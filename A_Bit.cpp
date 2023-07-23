#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        
        if(s[0] == '+')
            x++;
        if(s[0] == '-')
            x--;
        if(s[2] == '+')
            x++;
        if(s[2] == '-')
            x--;
    }
    cout<<x<<endl;

    return 0;
}