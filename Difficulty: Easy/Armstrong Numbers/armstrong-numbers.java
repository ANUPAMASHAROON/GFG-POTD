import java.util.*;
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        if(n<0){
            return false;
        }
        int temp = n;
        int count = 0;
        int n1 = n;
        while(n1!=0){
            int rem=n1%10;
            count++;
            n1 = n1/10;
        }
        
        int sum = 0;
        while(n!=0){
            int rem = n%10;
            sum = sum + (int)Math.pow(rem,count);
            n = n/10;
        }
        
        boolean flag = true;
        if(temp != sum){
            flag = false;
        }
        
        return flag;
        
    }
}