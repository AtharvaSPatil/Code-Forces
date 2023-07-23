#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c,d;
    cin>>c>>d;
    if(c%d==0 || d%c==0)
    {
        cout<<"Multiples"<<endl;
    }
    else
    {
        cout<<"No Multiples"<<endl;
    }

    return 0;
}