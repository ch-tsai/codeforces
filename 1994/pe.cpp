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
		for(int i=0; i<n; i++){
			int s;cin>>s;
			li[i]=s;
			for(int _=s; i>0;i--) cin>>s;
		}
		sort(li.begin(),li.end());

	}
}
