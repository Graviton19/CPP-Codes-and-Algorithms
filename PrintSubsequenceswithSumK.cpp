//Print all the Subsequences with Sum equal to K
#include<bits/stdc++.h>
using namespace std;

void PrintifSumisK(int ind,int sum,vector<int> &a, vector<int> &ans, int n,int k){
	if(ind == n){
		if(sum != k){
			return;
		}
		else{
			for(auto x: ans){
			cout<<x<<" ";
			}
			cout<<endl;
			return;
		}
	}
	//the case of Taking the element
	ans.push_back(a[ind]);
	PrintifSumisK(ind+1,sum+a[ind],a,ans,n,k);
	ans.pop_back();
	//the case of Not Taking the element 
	PrintifSumisK(ind+1,sum,a,ans,n,k);
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
	vector<int> ans;
	PrintifSumisK(i,sum,a,ans,n,k);
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	// int t; cin >> t; while(t--)
	solve();
	return 0;
}