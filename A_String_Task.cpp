#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,t;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            continue;
        }
        else
        {
            t+='.';
            t+=s[i];
        }
    }

    cout<<t<<endl;
    return 0;
}