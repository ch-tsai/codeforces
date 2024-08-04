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
		int n,m;cin>>n>>m;
		set<int> st;
		vector<vector<int>> g(n+1, vector<int>(m+1));
		vector<pii> ch(n*m+1);
		for(int i=0; i<n; i++){
			for(int j=1; j<=m; j++){
				st.insert(i*m+j);
				cout<<i*m+(i%2?m-j+1:j)<<' ';
				g[i+1][j]=i*m+(i%2?m-j+1:j);
				ch[i*m+(i%2?m-j+1:j)]={i+1,j};
			}cout<<'\n';
		}cout.flush();
		int cnt=0;
		while(!st.empty()){
			if(cnt%2==0){
				int a,b;cin>>a>>b;
				int amo=g[a][b];
				st.erase(amo);
			}else{
				int mini=*st.begin();
				cout<<ch[mini].ff<<' '<<ch[mini].ss<<'\n';
				cout.flush();
			}
		}
	}
}
