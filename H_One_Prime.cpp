#include<bits/stdc++.h>
using namespace std;

int if_prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
        int n;
        cin>>n;
        if(if_prime(n)){
        cout<<"NO"<<endl;}
        else{
        cout<<"YES"<<endl;}
    

    return 0;
}