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
		int n,m;cin>>n>>m;
		vector<int> li(n),q(n);
		vector<pii> cool(n);
		for(int i=0; i<n; i++) cin>>cool[i].ff;
		for(int i=0; i<n; i++) cin>>cool[i].ss;
		sort(cool.begin(),cool.end());
		for(int i=0; i<n; i++){
			li[i]=cool[i].ff;
			q[i]=cool[i].ss;
		}
		int ans=0;
		for(int i=0; i<n; i++){
			ans=max(ans,min(m/li[i],q[i])*li[i]);
		}
		for(int i=0; i<n-1; i++){
			if(li[i]!=li[i+1]-1) continue;
			int can=min(m/li[i],q[i]);
			int tmp=min(q[i+1],m-can*li[i]);
			if(m-can*li[i]>=li[i+1]){
				int rem=m-can*li[i];
				int anoq=min(q[i+1],rem/li[i+1]);
				int remq=q[i+1]-anoq;
				ans=max(ans,min(m,anoq*li[i+1]+can*li[i]+remq));
			}
			ans=max(ans,can*li[i]+tmp);
		}
		cout<<ans<<'\n';
	}
}
