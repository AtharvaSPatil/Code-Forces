#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, fr = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n <= 2)
      cout << "YES" << endl;
    else {
      for (int i = 2; i < n; i++) {
        for (int j = 0; j < i; j++) {
          if (s[i] == s[i - 1])
            continue;
          else if (s[i] == s[j]) {
            cout << "NO" << endl;
            fr = 1;
            break;
          }
        }
        if (fr == 1)
          break;
      }
      if (fr == 0)
        cout << "YES" << endl;
    }
  }
}