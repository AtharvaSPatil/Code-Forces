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
    char str1[100], str2[100];
    int result;
    cin >> str1 >> str2; 
    for(int i=0;i<strlen(str1);i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
        if(str1[i]<str2[i]){
            cout << "-1";
            exit(0);
        }
        else if (str1[i]>str2[i])
        {
            cout << "1";
            exit(0);
        }
        else
        result =0;        
    }
    cout << result;

    return 0;
}