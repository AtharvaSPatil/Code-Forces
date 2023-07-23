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
        int flag=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='1')
            {
              flag=1;
            }
          if(s[i]=='0' && s[i+1]=='0' && flag==1)
          {
              flag=-1;
              break;
          }
        }
        if(flag==-1)
        {
          cout<<"NO"<<endl;
        }
      else
      {
          cout<<"YES"<<endl;
      }
    }


    return 0;
}