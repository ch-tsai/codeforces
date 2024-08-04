#include <bits/stdc++.h>
#define pii pair<int, int>
#define pb push_back
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<"YES\n";
		vector<int> li(n);
		vector<bool> tak(n,0);
		vector<pii> ans(n-1);
		for(int i=0; i<n; i++) cin>>li[i];
		for(int i=n-1; i>=1; i--){
			vector<int> od(n,-1);
			for(int j=0;j<li.size();j++){
				if(tak[j])continue;
				if(od[li[j]%i]!=-1){
					ans[i-1]={od[li[j]%i]+1,j+1};
					tak[j]=true;
					break;
				}else{
					od[li[j]%i]=j;
				}
			}
		}
		for(int i=0; i<n-1; i++){
			cout<<ans[i].ff<<' '<<ans[i].ss<<'\n';
		}
	}



}
