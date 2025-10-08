//Recursion on Subsequences, Print all Subsequences
#include<bits/stdc++.h>
using namespace std;

void printAllSubsequences(int ind, vector<int> &ans,vector<int> &arr,int n){
	if(ind == n){
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		if(ans.size() == 0){
			cout<<"{}";
		}
		cout<<endl;
		return;
	}
	//take or pick the element
	ans.push_back(arr[ind]);
	printAllSubsequences(ind + 1,ans,arr,n);
	ans.pop_back();
	//not pick or not take the element
	printAllSubsequences(ind + 1,ans,arr,n);
}

void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> ans;
	printAllSubsequences(0,ans,arr,n);
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	// int t; cin >> t; while(t--)
	solve();
	return 0;
}