//Print any subsequence with sum K
#include<bits/stdc++.h>
using namespace std;

bool PrintifSumisK(int ind,int sum,vector<int> &a, vector<int> &ans, int n,int k){
	if(ind == n){
		if(sum != k){
			//condition not satisfied
			return false;
		}
		else{
			//condition satisfied
			for(auto x: ans){
				cout<<x<<" ";
			}
			cout<<endl;
			return true;
		}
	}
	//the case of Taking the element
	ans.push_back(a[ind]);
	if(PrintifSumisK(ind+1,sum+a[ind],a,ans,n,k) == true){
		//if we get the answer from here return true so no more answers
		return true;
	}
	ans.pop_back();
	//the case of Not Taking the element 
	if(PrintifSumisK(ind+1,sum,a,ans,n,k) == true){
		return true;
	}	
	return false;
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