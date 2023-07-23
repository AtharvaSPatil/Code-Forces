#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int hc,dc,hm,dm,k,w,a,flag=0;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        for(int i=0;i<=k;++i)
        {
            if(ceil(((double)(hc+i*a)/(double)dm))>=ceil(((double)hm/(double)(dc+(k-i)*w))))
            {
                flag =1;
                break;
            }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    }

    return 0;
}
    // int monh,monat,charh,charat,coins,p,h,flag=0;
    //     cin>>charh>>charat>>monh>>monat>>coins>>p>>h;
    //     for(int i=0;i<=coins;i++)
    //     {
    //         int newcharh=charh+(i*h);
    //         int newcharat=charat+((coins-i)*p);
    //         int time=ceil(monh/newcharat);
    //         int newtime=ceil(newcharh/monat);
    //         if(time<=newtime)
    //         {
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag==1)
    //     {
    //         cout<<"YES"<<endl;
    //     }
    //     else
    //     {
    //         cout<<"NO"<<endl;
    //     }