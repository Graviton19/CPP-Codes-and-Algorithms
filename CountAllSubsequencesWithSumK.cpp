//count of all the subsequences with sum K
#include<bits/stdc++.h>
using namespace std;

int PrintifSumisK(int ind,int sum,vector<int> &a, int n,int k){
	if(ind == n){
		if(sum == k){
			return 1;
		}
		else{
			return 0;
		}
	}
	int lsum = PrintifSumisK(ind+1,sum+a[ind],a,n,k);
	int rsum = PrintifSumisK(ind+1,sum,a,n,k);
	return lsum + rsum;
}

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum = 0;
	int i = 0;
	cout<<PrintifSumisK(i,sum,a,n,k)<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	// int t; cin >> t; while(t--)
	solve();
	return 0;
}