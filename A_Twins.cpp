#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,count=0,tempcount=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        count=count+a[i];
    }
    sort(a,a+n);
    int temp;
    if(count%2==0)
    {
        temp=count/2;
    }
    else
    {
        temp=(count+1)/2;
    }
    int i=n-1;
    while(count>=temp)
    {
        tempcount++;
        count=count-a[i];
        i--;
    }
    cout<<tempcount<<endl;
    return 0;
}