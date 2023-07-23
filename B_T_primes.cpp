// #include<bits/stdc++.h>
// using namespace std;


// #define int long long
// #define endl '\n' 

// void checkprime(int x)
// {
//     int count=0;
//     for(int i=1;i<=x/2;i++)
//     {
//         if(x%i==0)
//         {
//             count++;
//         }
//         else if(count == 2 && x%i==0)
//         {
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     if(count==2)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
// }

// signed main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         checkprime(a[i]);
//     }

//     return 0;
// }
#include <iostream>
#include <set>

using namespace std;

const int sqrt_lim = 1000001;

set<long long> prime_squares()
{
    static bool arr[sqrt_lim];

    for (int i = 2; i*i < sqrt_lim; i++)
    {
        if (!arr[i])
        {
            for (int j = i*i; j < sqrt_lim; j += i)
            {
                arr[j] = true;
            }
        }
    }

    set<long long> res;
    for (int i = 2; i < sqrt_lim; i++)
    {
        if (!arr[i])
            res.insert((long long)i * i);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    set<long long> sq(prime_squares());

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x; cin >> x;

        if (sq.find(x) != sq.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}