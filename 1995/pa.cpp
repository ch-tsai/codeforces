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
		if(m==0) cout<<"0\n";
		else if(m<=n) cout<<"1\n";
		else{
			m-=n;
			for(int i=n-1; i>=1; i--){
				m-=i;
				if(m<=0){
					cout<<2*(n-i)<<'\n';
					break;
				}
				m-=i;
				if(m<=0){
					cout<<2*(n-i)+1<<'\n';
					break;
				}
			}
		}
	}
}
