#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=998244353;
void printv(vector<ll>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
ll binpow(ll a, ll b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    // minor change
    if (b % 2){
        long long temp=((res%M) * (res%M))%M;
        return ((temp%M)*a)%M;
    }
    else
        return ((res%M) * (res%M))%M;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n;
        vector<pair<ll,ll>>traps;
        for(int i=0;i<n;i++){
            cin>>m>>k;
            traps.push_back({m,k-1});
        }
        sort(traps.begin(),traps.end());
        ll maxi=traps[0].first+traps[0].second/2;
        for(int i=1;i<traps.size();i++){
            maxi=min(maxi,traps[i].first+traps[i].second/2);
        }
        cout<<maxi<<endl;
    }
}