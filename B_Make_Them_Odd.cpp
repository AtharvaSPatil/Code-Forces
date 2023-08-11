#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, temp, sum=0;
    cin>>t;
    while(t--){
        cin>>n;
        set<int> s;
        sum=0;
        for(int i=0;i<n; i++){
            cin>>temp;
            if(temp%2==0) s.insert(temp);
        }
        while(s.empty()==false){
            temp = *s.rbegin();
            s.erase(temp);
            temp/=2;
            if(temp%2==0) s.insert(temp);
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

