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
		sort(li.begin(),li.end());
		vector<int> ano;
		for(int i=1; i<n; i++){
			if((li[i]%li[0])) ano.push_back(li[i]);
		}
		sort(ano.begin(),ano.end());
		bool cool=true;
		for(int i=1; i<ano.size(); i++){
			if((ano[i]%ano[0])) cool=false;
		}
		if(cool) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
