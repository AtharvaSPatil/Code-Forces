#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[3];
    for(int j=0;j<3;j++)
    {
        cin>>a[j];
    }
    sort(a,a+3);
    cout<<a[0]<<" "<<a[2]<<endl;
    return 0;
}