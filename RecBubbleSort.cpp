#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &a, int n){
	if(n==1){
		return;
	}
	int count = 0;
	for(int i=0;i<n-1;i++){
		if(a[i] > a[i+1]){
			swap(a[i],a[i+1]);
			count++;
		}
	}

	if(count == 0){
		return;
	}

	bubbleSort(a,n-1);
}

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bubbleSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	// int t; cin >> t; while(t--)
	solve();
	return 0;
}