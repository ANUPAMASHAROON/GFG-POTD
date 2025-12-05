class Solution {
public:
    void rearrange(vector<int>& arr){
         int n = arr.size();
         sort(arr.begin(),arr.end());
         int i = 0;
         while(i<n){
            int a = arr[n-1];
            for(int j = n-2;j>=i;j--){
                arr[j+1] = arr[j];
            }
            arr[i] = a;
            i+=2;
         }
    }
};