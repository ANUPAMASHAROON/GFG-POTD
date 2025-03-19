//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            long num = Long.parseLong(br.readLine().trim());
            Solution obj = new Solution();
            long ans = obj.closestPalindrome(num);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java
class Solution {
    private long getPalindrom(long left, boolean skipFirst) {
        long res = left;
        left = skipFirst ? left/10 : left;
        while(left!=0) {
            res = res * 10 + left % 10;
            left = left / 10;
        }
        return res;
    }
    private long getCloser(long num, long prev, long next) {
        if(Math.abs(num-prev) > Math.abs(num-next) ||
            (Math.abs(num-prev) == Math.abs(num-next) && next<prev)) {
            return next;
        }
        return prev;
    }
    
    public long closestPalindrome(long num) {
        if(num<10)
            return num;
        String str = Long.toString(num);
        int len = str.length();
        long left = Long.parseLong(str.substring(0, (len+1)/2));
        long res = getPalindrom(left, (len % 2) != 0);
        res = getCloser(num, res, getPalindrom(left+1, true));
        res = getCloser(num, res, getPalindrom(left+1, false));
        res = getCloser(num, res, getPalindrom(left-1, true));
        res = getCloser(num, res, getPalindrom(left-1, false));
        return res;
    }
}