class Solution {
  public:
     int bs(vector<int> &arr, int s, int e, int k)
    {
        if(s>e)
        {
            return -1;
        }
        
        int mid = s + (e-s)/2;
        
        if(arr[mid] == k)
        {
           int left = bs(arr, s, mid - 1, k);
            return (left != -1) ? left : mid; 
        }
        
        else if(arr[mid]<k)
        {
            return bs(arr,mid+1,e,k);
        }
        
        else
        {
            return bs(arr,s,mid-1,k);
        }
    }
    
    
    int binarysearch(vector<int> &arr, int k) {
        int ans = bs(arr,0,arr.size()-1,k);
        return ans;
    }
};