class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> map;
        
        for(int i = 0;i<arr.size();i++){
            map[arr[i]]++;
            
            if(map[arr[i]]>=k) return arr[i];
        }
        return -1;
    }
};