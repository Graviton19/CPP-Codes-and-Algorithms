#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	int ans = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int s = 0;
		for(int j=i;j<n;j++){
			s += a[j];
			if(s == k){
				ans = max(ans,j-i+1);
			}
		}
	}
	cout<<ans<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	// int t; cin >> t; while(t--)
	solve();
	return 0;
}