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
//     while(t--)
//     {
//         int n,mex;
//         cin>>n;
//         vector<int> v;
//         set<int> st;
//         vector<int> m(n,0);
//         for(int i=0;i<n;i++)
//         {
//             int input;
//             cin>>input;
//             v.push_back(input);
//             m[v[i]]==1;
//             st.insert(v[i]);
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             if(m[v[i]]==0)
//             {
//                 mex=i;
//                 break;
//             }
//         }
//         if(mex==n)
//         {
//             cout<<"No"<<endl;
//         }
//         else if(st.find(mex+1)==st.end() && mex!=n)
//         {
//             cout<<"Yes"<<endl;
//         }
//         else
//         {
//             int l,r;
//             for(int i=0;i<n;i++)
//             {
//                 if(v[i]==mex+1)
//                 {
//                     l=i;
//                 }
//             }
//             for(int i=n-1;i>=0;i--)
//             {
//                 if(v[i]==mex+1)
//                 {
//                     r=i;
//                 }
//             }
//             for(int i=l;i<=r;i++)
//             {
//                 v[i]=mex;
//             }
//             set<int> st1;
//             for(int i=0;i<n;i++)
//             {
//                 st1.insert(v[i]);
//             }
//             int newmex;
//             for(int i=0;i<n;i++)
//             {
//                 if(st1.find(i)==st.end())
//                 {
//                     newmex=i;
//                     break;
//                 }
//             }
//             if(newmex==mex+1)
//             {
//                 cout<<"Yes"<<endl;
//             }
//             else
//             {cout<<"No"<<endl;}
//         }
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
  int t;cin>>t;
  while ( t--)
  {
    int n;cin>>n; vector<int>v(n); set<int>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }

    int absent;
    for(int i=0;i<=n;i++){
        if(st.find(i)==st.end()){
            absent=i;
            break;
        }
    }

    if(st.find(absent+1)==st.end() && absent!=n){
        cout<<"Yes"<<endl;
    }
    else if(absent==n){
        cout<<"No"<<endl;
    }
    else
    {
         int start_ind;
         int last_ind;
         for(int i=0;i<n;i++){
            if(v[i]==absent+1){
                start_ind=i;
                break;
            }
         }

          for(int i=n-1;i>=0;i--){
            if(v[i]==absent+1){
                last_ind=i;
                break;
            }
         }

         for(int i=start_ind;i<=last_ind;i++){
            v[i]=absent;
         }

         set<int>st1;
         for(int i=0;i<n;i++){
            st1.insert(v[i]);
         }
         int ab;
         for(int i=0;i<=n+1;i++){
            if(st1.find(i)==st1.end()){
                ab=i;
                break;
            }
         }

         if(ab==absent+1){
            cout<<"Yes"<<endl;
         }
         else
         {
             cout<<"No"<<endl;
         }
         
    }

  }
  }