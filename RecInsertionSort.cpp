#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &a, int n){
	if(n <= 1){
		return;
	}

	InsertionSort(a,n-1);

	int last = a[n-1];
	int j = n-2;

	while(j>=0 && a[j] > last){
		a[j+1] = a[j];
		j--;
	}

	a[j+1] = last;
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
	InsertionSort(a,n);
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