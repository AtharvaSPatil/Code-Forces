#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b*log(a)>d*log(c))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    

    return 0;
}