class Solution {
public:
    void func(int ind,vector<int> &candidates, vector<int> &a,int target,int n,vector<vector<int>> &ans){
        if(ind == n){
            if(target == 0){
                ans.push_back(a);
            }
            return;
        }
        if(candidates[ind] <= target){
            a.push_back(candidates[ind]);
            func(ind,candidates,a,target-candidates[ind],n,ans);
            a.pop_back();
        }
        func(ind+1,candidates,a,target,n,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> a;
        int n = candidates.size();
        int ind = 0;
        vector<vector<int>> ans;
        func(ind,candidates,a,target,n,ans);
        return ans;
    }
};