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
		int n,x;cin>>n>>x;
		vector<int> li(n+1);
		for(int i=1; i<=n; i++) {
			cin>>li[i];
		}
		vector<int> pre(n+1,0);
		vector<int> jump(n+1);
		for(int i=1;i<=n; i++) pre[i]=pre[i-1]+li[i];
		for(int i=1;i<=n; i++){
			int l=i-1,r=n+1;
			int tar=pre[i-1]+x;
			while(l+1<r){
				int mid=(l+r)/2;
				if(pre[mid]<tar) l=mid;
				else r=mid;
			}
			if(pre[r]==tar) jump[i]=min(r+2,n+2);
			else jump[i]=min(r+1,n+2);
		}
		vector<int> dp(n+3,0);
		int ans=0;
		dp[n+2]=-1;
		for(int i=n; i>0;i--){
			//if(jump[i]=i&&li[i]>x) dp[i]=1;
			dp[i]+=dp[jump[i]]+1;
			//if(li[i]>x&&i==n) dp[i]++;
			ans+=n-i+1-dp[i];
		}
		cout<<ans<<'\n';

	}



}
