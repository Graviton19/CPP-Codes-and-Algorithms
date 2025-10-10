class Solution {
  public:
    void DoPermute(vector<int> &arr, vector<vector<int>> &ans, vector<int> &a,int n,vector<bool> &freq){
        if(a.size() == n){
            ans.push_back(a);
            return;
        }
        for(int i = 0;i<arr.size();i++){
            if(freq[i] == false){
                
                a.push_back(arr[i]);
                freq[i] = true;
                DoPermute(arr,ans,a,n,freq);
                freq[i] = false;
                a.pop_back();
            }
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        vector<int> a;
        int n = arr.size();
        
        vector<bool> freq(n,false);
        DoPermute(arr,ans,a,n,freq);
        return ans;
    }
};