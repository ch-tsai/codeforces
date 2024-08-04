#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
#define ld long double
const ld eps=1e-6;
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		vector<ld> f(n);
		for(int i=0; i<n; i++) {
			f[i]=log(li[i]);
			//cout<<f[i]<<' ';
		}
		int fail=false;
		int cnt=0;
		int par=0;
		for(int i=1; i<n; i++){
			if(f[i]==0&&f[i-1]!=0){
				fail=true;break;
			}
			if(par!=0&&f[i]>f[i-1]) continue;
			//cout<<i<<' ';
			while(f[i-1]>(1<<30)){
				f[i-1]/=(ld)(1<<30);
				par+=30;
			}
			int tmp=f[i-1]/f[i];
			int ad=0;
			while(1<<ad<tmp) ad++;
			tmp=1<<ad;
			if(tmp*f[i]>=f[i-1]-eps) f[i]*=tmp,cnt+=ad;
			else if((tmp*2)*f[i]>=f[i-1]-eps) f[i]*=tmp*2,cnt+=ad+1;
			cnt+=par;
		}
		if(fail) cout<<"-1\n";
		else cout<<cnt<<'\n';
	}
}
