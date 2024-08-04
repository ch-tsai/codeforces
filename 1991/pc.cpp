#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		sort(li.begin(),li.end());
		int o=0,e=0;
		for(int i=0; i<n; i++){
			if(li[i]%2) o++;
			else e++;
		}
		int maxi=li[n-1];
		int mini=li[0];
		if(o!=0&&e!=0) cout<<"-1\n";
		else{
			vector<int> ans;
			while(true){
				bool suc=true;
				int mid=(maxi+mini)/2;
				mini=1e9+7;
				maxi=0;
				for(int i=0; i<n; i++){
					li[i]=abs(li[i]-mid);
					mini=min(mini,li[i]);
					maxi=max(maxi,li[i]);
					if(li[i]!=0) suc=false;
				}
				if(mid!=0) ans.push_back(mid);
				if(suc) {
					break;
				}
			}
			cout<<ans.size()<<'\n';
			for(int x:ans) cout<<x<<' ';
			cout<<'\n';
		}
	}
}
