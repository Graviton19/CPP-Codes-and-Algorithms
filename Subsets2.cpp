class Solution {
public:
    void func(int ind,vector<int> &nums,vector<int> &a,vector<vector<int>> &ans,int n){
        ans.push_back(a);
        for(int i = ind;i<n;i++){
            if(i>ind && nums[i] == nums[i-1]) continue;
            a.push_back(nums[i]);
            func(i+1,nums,a,ans,n);
            a.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> a;
        int ind = 0;
        int n = nums.size();
        func(ind,nums,a,ans,n);
        return ans;
    }
};