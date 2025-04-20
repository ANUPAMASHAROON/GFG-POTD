class Solution:
    def missingNum(self, arr):
        # code here
        n = max(arr)
        ans = ((n*(n+1))//2) - sum(arr)
        return ans if ans else n+1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for _ in range(0, t):
    arr = list(map(int, input().split()))
    s = Solution().missingNum(arr)
    print(s)

    print("~")
# } Driver Code Ends