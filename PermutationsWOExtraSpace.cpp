class Solution {
  public:
    void DoPermute(int ind,vector<vector<int>> &ans, int n, vector<int> &arr){
        if(ind == n){
            ans.push_back(arr);
            return;
        }
        for(int i = ind;i<n;i++){
            swap(arr[ind],arr[i]);
            DoPermute(ind+1,ans,n,arr);
            swap(arr[i],arr[ind]);
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        int ind = 0;
        DoPermute(ind,ans,n,arr);
        return ans;
    }
};