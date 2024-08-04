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
		vector<char> li2(n);
		for(int i=0; i<n; i++) cin>>li[i];
		for(int i=0; i<n; i++) cin>>li2[i];
		vector<int> g(n,0),g2(n,0);
		int e=1;
		for(int i=0; i<n; i++){
			if(li[i]=='.'){
				if(i==0){
					g[i]=e;e++;
				}else if(g[i-1]){
					g[i]=g[i-1];
				}else if(g2[i-1]&&li2[i]=='.'){
					g[i]=g2[i-1];
					g2[i]=g2[i-1];
				}else{
					g[i]=e;e++;
				}
			}
			if(!g2[i]){
				if(li2[i]=='.'){
					if(g[i]){
						g2[i]=g[i];
					}
					else if(i==0){
						g2[i]=e;e++;
					}else if(g2[i-1]){
						g2[i]=g2[i-1];
					}else{
						g2[i]=e;e++;
					}

				}
			}
		}
		for(auto x:g) cout<<x;
		cout<<'\n';
		for(auto x:g2) cout<<x;
		cout<<'\n';
		int ans=0;
		vector<int> c(n,0),c2(n,0);
		if(e==4){
			for(int i=0; i<n-1; i++){
				if(li[i]=='.'){
					if(g[i+1]!=0&&g[i+1]==g2[i]&&g2[i+1]==0)c[i]++;
					else c[i]=1;
				}
				if(li2[i]=='.'){
					if(g2[i+1]!=0&&g2[i+1]==g[i]&&g[i+1]==0);
					else c2[i]=1;
				}
			}
			for(int i=1; i<n; i++){
				if(li[i]=='.'){
					if(g[i-1]!=0&&g[i-1]==g2[i]&&g2[i-1]==0);
					else c[i]=1;
				}
				if(li2[i]=='.'){
					if(g2[i-1]!=0&&g2[i-1]==g[i]&&g[i-1]==0);
					else c2[i]=1;
				}
			}

		}
		if()

	}
}
