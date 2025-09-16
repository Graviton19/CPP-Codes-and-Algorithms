#include<bits/stdc++.h>
using namespace std;

int pivotCorrectPlace(vector<int> &a,int low, int high){
	int pivot = a[low];
	int i = low;
	int j = high;
	while(i<j){
		while(a[i] <= pivot && i<=high-1){
			i++;
		}
		while(a[j] > pivot && j>= low+1){
			j--;
		}
		if(i<j){
			swap(a[i],a[j]);
		}
	}
	swap(a[low],a[j]);
	return j;
}

void quicksort(vector<int> &a, int low, int high){
	if(low < high){
		int Pindex= pivotCorrectPlace(a,low,high);
		quicksort(a,low,Pindex-1);
		quicksort(a,Pindex+1,high);
	}
}

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	quicksort(a, 0, n-1);
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