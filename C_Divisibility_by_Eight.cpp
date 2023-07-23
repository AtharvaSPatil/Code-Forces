#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-'0')%8==0)
        {
            cout<<"YES"<<endl;
            cout<<s[i]<<endl;
            return 0;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            int n = (s[i]-'0')*10 + (s[j]-'0');
            if(n%8==0)
            {
                cout<<"YES"<<endl;
                cout<<n<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            for(int k=j+1;k<s.size();k++)
            {
                int n = (s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
                if(n%8==0)
                {
                    cout<<"YES"<<endl;
                    cout<<n<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}