#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a,b,c,d;
    while(1)
    {
        n++;
        a=n/1000;
        b=n/100;
        b=b%10;
        c=n/10;
        c=c%10;
        d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }
    cout<< n << endl;

    return 0;
}