#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;

int power(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    else
    {
        int value=power(a,b/2);
        if(b%2==0)
            return value*value;
        else
            return value*value*a;
    }
}

int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}

int lcm(int a,int b)
{
        return (a*b)/(gcd(a,b));
}

vector<int> primefactors(int n)
{
    vector<int> factors;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            factors.push_back(i);
            n/=i;
        }
    }
    return factors;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> f;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        f[a]++;
    }
    int cnt = f[4];
    if (f[1] >= f[3])
    {
        cnt += f[3];
        f[1] -= f[3];
        cnt += f[2] / 2;
        if (f[2] % 2)
        {
            cnt++;
            f[1] -= 2;
            if (f[1] < 0)
            {
                f[1] = 0;
            }
        }
        if (f[1] > 0)
        {
            cnt += ceil(f[1] / 4.0);
        }
    }
    else
    {
        cnt += f[3];
        cnt += ceil(f[2] / 2.0);
    }

    cout << cnt << endl;
    return 0;
}


// int temp=4;
//         while(temp>=a[i])
//         {
//             count++;
//             temp-=a[i];
//             i++;
//         }