#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum = 0;
	int mxlen = 0;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		sum += a[i];
		if(sum == k){
			mxlen = max(mxlen, i +1);
		}
		int rem = sum - k;
		if(mp.find(rem) != mp.end()){
			int len = i - mp[rem];
			mxlen = max(mxlen,len);
		}
		mp[sum] = i;
	}
	cout<<mxlen<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	// int t; cin >> t; while(t--)
	solve();
	return 0;
}