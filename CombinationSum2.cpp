class Solution {
public:
    void func(int ind, int target, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &a, int n){
        if(target == 0){
            ans.push_back(a);
            return;
        }
        for(int i = ind;i<n;i++){
            if(i>ind && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            a.push_back(candidates[i]);
            func(i+1,target-candidates[i],candidates,ans,a,n);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> a;
        int ind = 0;
        int n = candidates.size();
        func(ind,target,candidates,ans,a,n);
        return ans;
    }
};