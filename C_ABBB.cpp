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
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()==0)
            {
                st.push(s[i]);
            }
            else if(s[i]=='B' && (st.top()=='A' || st.top()=='B'))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout<<(int)st.size()<<endl;
    }

    return 0;
}