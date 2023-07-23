#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[3],b[3];
    for(int j=0;j<3;j++)
    {
        cin>>a[j];
    }
    for(int i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    sort(a,a+3);
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}