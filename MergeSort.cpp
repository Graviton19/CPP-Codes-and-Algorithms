#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &a, int low,int mid, int high){
  vector<int> ans;
  int left = low;
  int right = mid+1;

  while(left<=mid && right<=high){
    if(a[left] <= a[right]){
      ans.push_back(a[left]);
      left++;
    }
    else{
      ans.push_back(a[right]);
      right++;
    }
  }

  while(left<=mid){
    ans.push_back(a[left]);
    left++;
  }

  while(right<=high){
    ans.push_back(a[right]);
    right++;
  }

  for(int i=low;i<=high;i++){
    a[i] = ans[i-low];
  }
}

void MergeSort(vector<int> &a,int low,int high){

  if(low >= high){
    return;
  }

  int mid = (low + high)/2;
  MergeSort(a,low,mid);
  MergeSort(a,mid+1,high);
  Merge(a,low,mid,high);
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
  MergeSort(a,0,n-1);
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