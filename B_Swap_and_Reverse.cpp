#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<char> odd, even;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                even.pb(s[i]);
            } else {
                odd.pb(s[i]);
            }
        }
        sort(all(even));
        sort(all(odd));
        string ans1 = "";
        for (int i = 0, j = 0; i < sz(even) || j < sz(odd); ++i, ++j) {
            if (i < sz(even)) {
                ans1 += even[i];
            }
            if (j < sz(odd)) {
                ans1 += odd[i];
            }
        }
        if (k % 2 == 0) {
            sort(all(s));
            cout << s << "\n";
            continue;
        }
        cout << ans1 << "\n";
    }

}