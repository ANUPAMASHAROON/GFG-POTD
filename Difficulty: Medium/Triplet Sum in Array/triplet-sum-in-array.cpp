class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        
        sort(arr.begin(),arr.end()); int start=0,end=arr.size()-1,find=0;
        for(int i = 0 ; i<arr.size();i++)
        {
            find=target-arr[i];
            start=i+1; end=arr.size()-1;  
            while(start<end)
            {
                if(arr[start]+arr[end]==find)
                {return true;
            }
            else if(arr[start]+arr[end]>find)
            {
                end--;
            }
            else{ 
                start++;
        }
                
            }
        
    }
    return false;
    }
};