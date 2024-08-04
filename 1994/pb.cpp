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
		string a,b;cin>>a>>b;
		bool suc=true;
		for(int i=0; i<n; i++){
			if(a[i]=='1'){
				cout<<"YES\n";
				suc=false;
				break;
			}else if(b[i]=='1'){
				cout<<"NO\n";
				suc=false;
				break;
			}
		}

			if(suc)cout<<"YES\n";
	}



}
