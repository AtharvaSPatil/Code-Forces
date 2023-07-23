#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            cout<<"HARD"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"EASY"<<endl;
    }

    return 0;
}