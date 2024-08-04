#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		string a,b;cin>>a>>b;
		if(n<3){
			cout<<0<<'\n';
			continue;
		}
		int ans=0;
		for(int i=1; i<n-1; i++){
			if(a[i]=='.'&&a[i-1]=='.'&&a[i+1]=='.'&&b[i]=='.'&&b[i-1]=='x'&&b[i+1]=='x') ans++;
			if(b[i]=='.'&&b[i-1]=='.'&&b[i+1]=='.'&&a[i]=='.'&&a[i-1]=='x'&&a[i+1]=='x') ans++;
		}
		cout<<ans<<'\n';
	}
}
