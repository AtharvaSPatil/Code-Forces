#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 

int f(int x) {
    if (x < 10) {
        if (x == 0) return 1; else return x;
    }
    return max((x % 10) * f(x / 10), 9 * f(x / 10 - 1));
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
// 390 