#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,sum=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum = sum+i;
    }
    // int res=fib(n);
    cout<<sum<<endl;
    return 0;
}