#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 

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
    if(n!=1)
    factors.push_back(n);
    return factors;
}

vector<int> prefix_sum_array(vector<int> a)
{
    vector<int> ans;
    int n=sizeof(a)/sizeof(a[0]);
    ans[0]=0;
    for(int i=0;i<n;i++)
    {
        ans[i]=ans[i]+a[i];
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        vector<int> res;
        for(int i=0;i<5;i++)
        {
            cin>>v[i];
        }
        res=prefix_sum_array(v);
        for(int i=0;i<5;i++)
        {
            res[i];
        }
    }

    return 0;
}

vector<int> result(A + 1, 0);
    vector<int> pending_work;
    
    for (int day = 1; day <= A; ++day) {
        // Check if there is any pending work that can be completed on this day
        for (int i = 0; i < pending_work.size(); ++i) {
            int work_type = pending_work[i];
            if (B[work_type][1] == day) {
                // The deadline for this work type has arrived
                result[day] = work_type + 1;
                pending_work.erase(pending_work.begin() + i);
                --i;
            } else {
                --B[work_type][2];
                if (B[work_type][2] == 0) {
                    // Completed the work on this day
                    result[day] = work_type + 1;
                    pending_work.erase(pending_work.begin() + i);
                    --i;
                }
            }
        }
        
        // Check if any new work is given on this day
        for (int i = 0; i < B.size(); ++i) {
            if (B[i][0] == day) {
                pending_work.push_back(i);
            }
        }
    }
    
    // Check if all work is completed before their respective deadlines
    for (int i = 0; i < B.size(); ++i) {
        if (B[i][2] > 0) {
            return {-1}; // Not possible to complete all work
        }
    }
    
    result[0] = -1; // Set the first element to -1
    return result;