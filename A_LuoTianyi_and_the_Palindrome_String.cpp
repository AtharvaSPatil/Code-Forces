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
        string s;
        cin>>s;
        multiset<char> s1;
        for(int i=0;i<s.size();i++)
        {
            s1.insert(s[i]);
        }
        if(s.size()==s1.count(s[0]))
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<s.size()-1<<endl;
        }
        
    }

    return 0;
}