#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
	cin >> a >> b;
	int answer = 0;
	while(a <= b) {
		a *= 3;
		b *= 2;
		++answer;
	}
	cout<<answer<<endl;

    return 0;
}