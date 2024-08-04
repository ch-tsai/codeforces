#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<char> li(n);
		int cool=0;
		for(int i=0; i<n; i++) {
			cin>>li[i];
			if(li[i]=='(') cool++;
		}
		li[0]='(';
		int cnt=1,ctt=0;
		int co1=0,co2=0;
		for(int i=1; i<n-1; i++){
			if(i%2==0){
				if(cnt+cool==n/2){
					li[i]=')';ctt++;
					cerr<<1;
				}else if(ctt+n/2-cool==n/2){
					li[i]='(';cnt++;
					cerr<<2;
				}
				else if(cnt+co1-1>ctt+co2){
					li[i]=')';ctt++;
					cerr<<3;
				}else if((cnt+co1-1==ctt+co2)&&(li[i+1]=='(')){
					li[i]=')';ctt++;
					cerr<<4;
				}else{
					li[i]='(';cnt++;
					cerr<<5;
				}
			}else{
				if(li[i]=='(') co1++;
				else co2++;
			}
		}
		int ans=0;
		stack<int> st;
		for(int i=0; i<n; i++){
			if(li[i]=='('){
				st.push(i);
			}else{
				ans+=i-st.top();
				st.pop();
			}
		}
		cout<<ans<<'\n';
	}
}
