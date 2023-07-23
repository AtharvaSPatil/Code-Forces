#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
        int n,e=0,o=0,p=0,ne=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                e++;
            }
            if(a[i]%2!=0)
            {
                o++;
            }
            if(a[i]>0)
            {
                p++;
            }
            if(a[i]<0)
            {
                ne++;
            }
        }
        cout<<"Even: "<<e<<endl;
        cout<<"Odd: "<<o<<endl;
        cout<<"Positive: "<<p<<endl;
        cout<<"Negative: "<<ne<<endl;
    

    return 0;
}