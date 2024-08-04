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
		if(n<6){
			cout<<(n+2)/2<<'\n';
			for(int i=1; i<=n; i++){
				cout<<i/2+1<<' ';
			}cout<<'\n';
		}else{
			cout<<4<<'\n';
			for(int i=1; i<=n; i++){
				cout<<(i-1)%4+1<<' ';
			}cout<<'\n';
		}
	}
}
