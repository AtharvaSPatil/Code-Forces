#include<bits/stdc++.h>
        using namespace std;
         
        int main(){
        	int t;
        	cin>>t;
        	while(t--){	
        		unordered_map <char, int> m1;
        		int n, r = 0, g = 0, f = 0;
        		string s;
        		cin>>s;
        		for(int i = 0; i<s.length(); i++){
        			m1[s[i]]++;
        			}
        		for(auto x:m1){
        			if(x.second >= 2){
        				r++;
        				g++;
        				}
        			else{
        				if(f == 0){
        					r++;
        					f = 1;
        				}
        					else{
        					g++;
        					f = 0;
        				}
        			}
        		}
        		cout<<min(r, g)<<endl;						
        		}			
        	return 0;
        }