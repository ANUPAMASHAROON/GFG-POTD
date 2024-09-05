#User function Template for python3


class Solution:
    
    #Function to find the maximum number of cuts.
    def maximizeTheCuts(self,n,x,y,z):
        #code here
        dp = [float('-inf')] * (n + 1)
        dp[0] = 0
        for i in range(1, n + 1):
            if i >= x:
                dp[i] = max(dp[i], 1 + dp[i - x])
            if i >= y:
                dp[i] = max(dp[i], 1 + dp[i - y])
            if i >= z:
                dp[i] = max(dp[i], 1 + dp[i - z])
        return max(dp[n], 0)
        # def solve(n, x, y, z, dp):
        #     if n == 0:
        #         return 0
        #     if n < 0:
        #         return float('-inf')

        #     if(dp[n] != float('-inf')):
        #         return dp[n]
                
        #     takeX = 1 + solve(n - x, x, y, z, dp)
        #     takeY = 1 + solve(n - y, x, y, z, dp)
        #     takeZ = 1 + solve(n - z, x, y, z, dp)

        #     dp[n] = max(takeX, takeY, takeZ)
        #     return dp[n]

        # dp = [float('-inf')]*(n+1)
        # result = solve(n, x, y, z, dp)
        # return max(result, 0)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    t=int(input())
    for tcs in range(t):
        n=int(input())
        x,y,z=[int(x) for x in input().split()]
        
        print(Solution().maximizeTheCuts(n,x,y,z))
# } Driver Code Ends