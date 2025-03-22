//{ Driver Code Starts
import java.io.*;
import java.util.*;

class IntArray {
    public static int[] input(BufferedReader br) throws IOException {
        String[] s = br.readLine().trim().split(" ");
        int n = s.length;
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = Integer.parseInt(s[i]);

        return a;
    }

    public static void print(int[] a) {
        for (int e : a) System.out.print(e + " ");
        System.out.println();
    }

    public static void print(ArrayList<Integer> a) {
        for (int e : a) System.out.print(e + " ");
        System.out.println();
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            int[] arr = IntArray.input(br);

            Solution obj = new Solution();
            int res = obj.maxValue(arr);

            System.out.println(res);
            System.out.println("~");
        }
    }
}

// } Driver Code Ends


class Solution {
    int maxValue(int[] arr) {
        // code here
        int n = arr.length;
        if(n==0) return 0;
        if(n==1) return arr[0];
        return Math.max(roberry(arr,0,n-2),roberry(arr,1,n-1));
        
    }
    public static int roberry(int[] arr,int start,int end){
        int n = end-start+1;
        if(n==0) return 0;
        if(n==1) return arr[start];

        int[] dp = new int[n];
        dp[0] = arr[start];
        dp[1] = Math.max(dp[0],arr[start+1]);
        for(int i=2;i<n;i++){
            dp[i] = Math.max(arr[i+start]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];

    }
}

