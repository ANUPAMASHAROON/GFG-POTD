#User function Template for python3

class Solution:
	def pushZerosToEnd(self,arr):
    	# code here
    	pos,n=0,len(arr)
        for i in range(n):
            if arr[i]!=0:
               arr[i],arr[pos]=arr[pos],arr[i]
               pos+=1

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ob.pushZerosToEnd(arr)
        for x in arr:
            print(x, end=" ")
        print()
        tc -= 1
# } Driver Code Ends