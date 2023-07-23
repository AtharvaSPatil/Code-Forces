#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%3==0)
        cout<<n/3<<" "<<n/3<<endl;
        else if(n%3==2)
        cout<<(n-1)/3<<" "<<((n-1)/3)+1<<endl;
        else
        cout<<(n-1)/3+1<<" "<<((n-1)/3)<<endl;
    }
    return 0;
}