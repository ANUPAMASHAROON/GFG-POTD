#User function Template for python3
class Solution:
    def findDuplicate(self, arr):
        #code here
        for i in range(len(arr)):
            e = abs(arr[i])
            if arr[e] < 0:
                return e
            arr[e] *= -1
        return 0


#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().strip().split()))

        ob = Solution()
        print(ob.findDuplicate(arr))
        print("~")

# } Driver Code Ends