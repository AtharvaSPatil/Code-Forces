#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,an=0;
    cin>>n;
    while(n){
        if(n&1)
        an++;
        n>>=1;
    }
    cout<<an<<endl;

    return 0;
}