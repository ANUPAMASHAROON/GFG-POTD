class Solution {
    int stockBuySell(int arr[]) {
        // code here
        int n=arr.length;
        int s=0;
        for(int i=0;i<n-1;i++){
            int j=i+1;
            int k=arr[j]-arr[i];
            if(k<0) k=0;
            s+=k;
        }
        return s;
    }
}