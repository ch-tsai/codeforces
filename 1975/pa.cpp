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
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		bool can=false;
		for(int i=0; i<n; i++){
			bool cool=true;
			for(int j=0; j<n-1; j++){
				if(li[(i+j)%n]>li[(i+j+1)%n]) cool=false;
			}
			if(cool) can=true;
		}
		if(can) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
