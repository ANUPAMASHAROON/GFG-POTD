class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<int, int> map;
        map[0] = -1;
        int prefix = 0;
        int ans = 0;
        
        for(int i = 0;i<arr.size();i++){
            prefix += arr[i];
            
            if(map.count(prefix)){
                ans = max(ans , i-map[prefix]);
            }
            else {
                map[prefix] = i;
            }
        }
        
        return ans;
    }
};

