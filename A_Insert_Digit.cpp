#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,counter=0;
        cin>>n>>d;
        string s;
        cin>>s;
        int i;
        for( i=0;i<n;i++)
        {
            if( (s[i]-'0' ) <= d   and (s[i+1]-'0') <= d)
            {
                break;
            }
            counter++;
        }
        
        // cout<<counter<<endl;
        for( i=0;i<counter;i++)
        {
            cout<<s[i];
        }
        string ne;
        ne=d+'0';
        cout<<ne;

        for( i=counter;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }

    // 828127127732
    // 8281271277321
    // 8281127127732 

    return 0;
}