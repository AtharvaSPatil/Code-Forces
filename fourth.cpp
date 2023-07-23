#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n-1; i += 2)
            {
                swap(a[i], a[i + 1]);
            }
        
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (int i = 4; i <= n; i += 2)
            {
                swap(a[i], a[i + 1]);
            }
            cout << "3 1 2 ";
            for (int i = 4; i <= n; i++)
            {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}