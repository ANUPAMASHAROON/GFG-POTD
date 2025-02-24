#User function Template for python3

class Solution:
    #Function to count the number of possible triangles.
    def countTriangles(self, arr):
        # code here
        c = 0
        n = len(arr)
        arr.sort()
        if n < 3:
            return 0
            
        for i in range(n-1,1,-1):
            j = 0
            k = i-1
            while j<k:
                if arr[j]+arr[k] > arr[i]:
                    c += (k-j)
                    k = k -1
                else:
                    j = j+1
        return c


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.countTriangles(arr))

        print("~")

# } Driver Code Ends