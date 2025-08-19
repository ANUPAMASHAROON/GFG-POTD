class Solution {
    
    static int total(int n){
        if (n==0){
            return 0;
      }
      return n + total(n-1);
    }
    
    
    
    public static int findSum(int n) {
        // code here
       return total(n);
    }
}