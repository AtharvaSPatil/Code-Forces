#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;    
    cin>>a>>b;

    if(b<2)
    {
        if(b==0)
        cout<<"1"<<endl;
        else
        {
            cout<<"3"<<endl;
        }
    }
    else{
      if(b%2==0)
      {
        cout<<(b/2)*6+3<<endl;
      }
      else
      {
        cout<<((b+1)/2)*6<<endl;
      }
    }

    return 0;
}