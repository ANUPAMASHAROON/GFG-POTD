class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==k){
            return true;
            }
        }
          return false;
    }
  
};