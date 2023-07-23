#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char a;
    cin>>a;
    if(a>=97)
    {
        cout<<char(a-32)<<endl;
    }
    else{
        cout<<char(a+32)<<endl;
    }
    return 0;
}