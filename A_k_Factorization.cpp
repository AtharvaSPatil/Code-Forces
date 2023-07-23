#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,pro=1;
    cin>>n>>k;
    vector<int> P;

    while (n%2 == 0)
    {
    	P.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            P.push_back(i);
        }
        
    }
    if (n > 2){
        P.push_back(n);
    }
    
    if(P.size()<k){
        printf("-1");
        return 0;
    }
    for(int i=0;i<k-1;i++){
        printf("%d ",P[i]);
    }
    int answer = 1;
    for(int i=k-1;i<P.size();i++){
        answer *= P[i];
    }
    printf("%lld",answer);
    return 0;
}