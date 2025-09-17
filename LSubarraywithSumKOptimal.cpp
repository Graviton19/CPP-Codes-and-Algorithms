#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int left = 0, right = 0;
	int sum = 0;
	int mxlen = 0;
	while(right < n){
		while(left <= right && sum > k){
			sum = sum - a[left];
			left++;
		}
		if(sum == k){
			mxlen = max(mxlen, right-left +1);
		}
		right++;
		if(right < n){
			sum += a[right];
		}
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