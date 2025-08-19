class Solution {
  public:
    int f(int i, vector<int>& arr, int target,vector<vector<int>>& dp){
        if(i>=arr.size()){
            return target==0 ? 1 : 0;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        
        int exc = f(i+1,arr,target,dp);
        
        int inc = 0;
        if (target - arr[i] >= 0) {
            inc = f(i + 1, arr, target - arr[i], dp);
        }
        
        return dp[i][target] = inc + exc;
    }
    
    int perfectSum(vector<int>& arr, int target) {
        vector<vector<int>> dp(arr.size()+1, vector<int>(target+1, -1));
        return f(0,arr,target,dp);
    }
};

