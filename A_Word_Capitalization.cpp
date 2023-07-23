#include<bits/stdc++.h>
using namespace std;


// #define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        string s;
        cin>>s;
        if(int(s[0])>=97)
        {
            s[0]=static_cast<char>(s[0] - 32);
        }
        cout<<s<<endl;
    

    return 0;
}