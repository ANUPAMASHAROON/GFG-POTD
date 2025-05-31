class Solution {
public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0], high = matrix[n-1][n-1];

        auto countLessEqual = [&](int mid) {
            int count = 0, j = n - 1;
            for(int i = 0; i < n; ++i) {
                while(j >= 0 && matrix[i][j] > mid) j--;
                count += (j + 1);
            }
            return count;
        };

        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int cnt = countLessEqual(mid);

            if (cnt < k) {
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;
    }
};