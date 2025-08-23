class Solution {
    public int reverseExponentiation(int n) {
        // code here
                int rev=0;
        int rem=0;
        int R=n;
        while(R>0){
            rem=R%10;
            rev=(rev*10)+rem;
            R=R/10;
        }
        int ans=1;
        for(int i=0;i<rev;i++){
            ans=ans*n;
        }
        return ans;
    }
}