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
		vector<int> b(n);
		for(int i=0; i<n-1; i++) cin>>b[i];
		vector<int> a(n);
		a[0]=b[0];
		a[n-1]=b[n-2];
		for(int i=1; i<n-1; i++){
			a[i]=b[i]|b[i-1];
		}
		bool suc=true;
		for(int i=0; i<n-1; i++){
			if((a[i]&a[i+1])!=b[i]) suc=false;
		}
		if(suc) for(auto x:a)  cout<<x<<' ';
		else cout<<"-1";
		cout<<'\n';
	}
}
