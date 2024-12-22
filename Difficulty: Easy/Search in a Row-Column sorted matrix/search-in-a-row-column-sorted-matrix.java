//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class gfg {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            int mat[][] = new int[n][m];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) mat[i][j] = sc.nextInt();
            }

            int x = sc.nextInt();

            if (new Solution().matSearch(mat, x))
                System.out.println("true");
            else
                System.out.println("false");

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {
    public static boolean matSearch(int mat[][], int x) {
        // your code here
        int n=mat.length;
        int m = mat[0].length;
        for(int i=0;i<n;i++){
            if(mat[i][0]<=x&&mat[i][m-1]>=x){
                int l=0;
                int r=m-1;
                    while(r>=l){
                        int min=(r+l)/2;
                        if(mat[i][min]==x){
                            return true;
                        }
                        
                        if(mat[i][min]>x){
                            r=min-1;
                        }else{
                            l=min+1;
                        }
                    }
            }
        }
        return false;
    }
}