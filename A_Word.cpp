#include<bits/stdc++.h>
using namespace std;


// #define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // string s;
    // int count;
    // cin>>s;
    // for(int i=0;i<s.size();i++)
    // {
    //     if(int(s[i])>=97)
    //     {
    //         count++;
    //     }
    // }
    // if(count>ceil(s.size()/2) && s.size()%2==0)
    // {
    //     transform(s.begin(),s.end(),s.begin(),::toupper);
    // }
    // else
    // {
    //     transform(s.begin(),s.end(),s.begin(),::tolower);
    // }
    // cout<<s<<endl;
    string s;
    unsigned short int UpperCase = 0, LowerCase = 0;
    
    cin >> s;
    
    for(unsigned short int i = 0;i < s.size();i++)
    {
        if( s[i] <= 90 )
            UpperCase++;
        else if( s[i] >= 97 )
            LowerCase++;
    }
    
    if( UpperCase > LowerCase )
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    cout << s;
    return 0;
}