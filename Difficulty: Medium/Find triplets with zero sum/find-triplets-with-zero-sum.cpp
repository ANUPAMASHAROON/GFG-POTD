class Solution {
  public:
   bool findTriplets(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return false;
    
        sort(arr.begin(), arr.end());
    
        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;
            int target = -arr[i];
    
            while (left < right) {
                int sum = arr[left] + arr[right];
                if (sum == target) {
                    return true;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return false;
    }
};