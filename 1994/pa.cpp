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
		if(n==1&&m==1){
			cin>>n;
			cout<<-1<<'\n';
			continue;
		}
		if(m==1){
			vector<int> li(n);
			for(int i=0; i<n; i++)cin>>li[i];
			for(int i=0;i<n;i++)cout<<li[(i+1)%n]<<'\n';
			continue;
		}
		for(int i=0; i<n; i++){
			vector<int> li(m);
			for(int i=0; i<m; i++) cin>>li[i];
			for(int i=0; i<m; i++) cout<<li[(i+1)%m]<<' ';
			cout<<'\n';
		}
	}



}
