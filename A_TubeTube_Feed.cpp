#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        int n,t;
        cin>>n>>t;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
    vector<int> B(n);
    for (int i = 0; i < n; i++) {
    cin >> B[i];
  }
    pair<int, int> res = {-1, -1};
    for (int i = 0; i < n; i++) {
      if (i + A[i] <= t) {
        res = max(res, {B[i], i + 1});
      }
    }
    cout << res.second << endl;
  }


    

    return 0;
}