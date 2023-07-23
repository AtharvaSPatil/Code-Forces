// #include<bits/stdc++.h>
// using namespace std;


// #define int long long
// #define endl '\n' 


// signed main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     vector<int > a;
//     a.push_back(0);
//     a.push_back(2);
//     for(int i=2;i<=1000000;i++)
//     {
//         int ans=a[i-1]+(i-1)+i*2;
//         a.push_back(ans);
//     }
//     while(t--)
//     {
//         int n;
//         int sum=0;
//         while(n>0)
//         {
//             int index=lower_bound(a.begin(),a.end(),n)-a.begin();
//             if(a[index]==n)
//             {
//                 sum++;
//                 n=n-a[index];
//             }
//             else
//             {
//                 if(index-1==0)
//                 {
//                     break;
//                 }
//                 sum++;
//                 n=n-a[index];
//             }
//         }
//         cout<<sum<<endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;



int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long cnt = 0;
        while(n > 2)
        {
            long long t = 5;
            long long now = 2;
            while(n >= t + now)
            {
                now = t + now;
                t += 3;
            }
            n -= now;
            cnt ++;
        }
        if(n >= 2) cnt ++;
        cout << cnt << endl;
    }

    return 0;
}