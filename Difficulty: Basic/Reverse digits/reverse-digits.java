import java.util.*;

class Solution {
    public int reverseDigits(int n) {
        
        int org=n;
        String s=String.valueOf(n);
        String rev="";
        for(int i=s.length()-1;i>=0;i--){
            int ans=s.charAt(i)-'0';
            rev+=ans;
        }
        return Integer.valueOf(rev);
    }
    public static void main(String args[]){
        Solution obj=new Solution();
        Scanner rk=new Scanner(System.in);
        int  n=rk.nextInt();
        System.out.println(obj.reverseDigits(n));
    }
}

