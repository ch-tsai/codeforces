#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
bool good(vector<int>& arr, int& N, int& K,int& median){
	int pre[N];
	for (int i = 0; i < N; i++) {
		if (arr[i] >= median)
			pre[i] = 1;
		else
			pre[i] = -1;

		if (i > 0)
			pre[i] += pre[i - 1];
	}
	int mx = pre[K - 1];

	int mn = 0;

	for (int i = K; i < N; i++) {
		mn = min(mn, pre[i - K]);
		mx = max(mx, pre[i] - mn);
	}
	if (mx > 0)
		return true;
	return false;
}

int maxMedian(vector<int> &arr, int N, int K){
	int l = 1, r = N + 1;

	int mx_median = -1;

	while (l <= r) {
		int mid = (l + r) / 2;
		if (good(arr, N, K, mid)) {
			mx_median = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	return mx_median;
}


signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		cout<<maxMedian(li,n,2)<<'\n';
	}
}
