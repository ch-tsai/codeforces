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
		string n;cin>>n;
		int sz=n.size();
		bool suc=false;
		cout<<n[0];
		for(int i=1; i<sz; i++){
			if(!suc&&n[i]==n[i-1]) {
				cout<<(char)((n[i]+1-'a')%26+'a')<<n[i];
				suc=true;
			}
			else cout<<n[i];
		}
		if(!suc){
			cout<<(char)((n[sz-1]+1-'a')%26+'a');
		}cout<<'\n';
	}
}
