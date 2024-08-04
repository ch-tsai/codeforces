#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

int re(int root,vector<int>& li, vector<vector<int>>& chi){
	if(chi[root].size()!=0){
		int mini=1e9;
		for(auto x:chi[root]) mini=min(mini, re(x,li,chi));
		if(root!=1)return min(mini,(mini+li[root])/2);
		else return mini+li[root];
	}return li[root];
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> li(n+1);
		for(int i=1; i<=n; i++) cin>>li[i];
		vector<int> pa(n+1);
		vector<vector<int>> chi(n+1);
		for(int i=2; i<=n; i++) {
			cin>>pa[i];
			chi[pa[i]].push_back(i);
		}
		pa[1]=1;
		cout<<re(1,li,chi)<<'\n';
	}
}
