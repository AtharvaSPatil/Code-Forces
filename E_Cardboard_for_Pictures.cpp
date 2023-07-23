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
int maxSub(vector<int>& nums)
{
    int n=nums.size(),ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i,curSum=0;j<n;j++)
        {
            curSum+=nums[j];
            ans=max(ans,curSum);
        }
    }
    return ans;
}
bool isPrime(int k,int n,vector<int> a)
{
    vector<int> v(k,0);
    for(int i=0;i<n;i++)
    {
        v[a[i]%k]++;
    }
    for(int i=0;i<k;i++)
    {
        if(v[i]<=1)
        {
            return true;
        }
    }
    return false;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,k,left,right;
        cin>>n>>k;
        left=0;
        int summ=0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>right;
            a[i]=right;
            left+=right*right;
            summ+=right;
        }
        k-=left;
        k=k/4;
        k=k/n;
        summ/=2*n;
        int ans=sqrt(summ*summ+k);
        ans-=summ;
        cout<<ans<<endl;
    }

    return 0;
}