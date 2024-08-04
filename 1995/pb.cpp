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
		vector<int> li(n+1);
		for(int i=1; i<=n; i++) cin>>li[i];
		sort(li.begin(),li.end());
		int ans=0;
		for(int i=0,j=1,sum=li[1];j<=n; j++,sum+=li[j]){
			while(sum>m||li[i+1]<li[j]-1){
				i++;
				sum-=li[i];
			}
			ans=max(ans,sum);
		}
		cout<<ans<<'\n';
	}
	
}
