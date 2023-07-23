#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if((s=='+' && a+b==c) || (s=='-' && a-b==c) || (s=='*' && a*b==c))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        if(s=='+')
        {
            cout<<a+b<<endl;
        }
        else if(s=='-')
        {
            cout<<a-b<<endl;
        }
        else if(s=='*')
        {
            cout<<a*b<<endl;
        }
    }
    
    return 0;
}