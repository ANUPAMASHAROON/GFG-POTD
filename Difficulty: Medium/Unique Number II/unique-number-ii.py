#User function Template for python3

class Solution:
	def singleNum(self, arr):
		# Code here
		h={}
        for i in range(len(arr)):
            if arr[i] in h:
                h[arr[i]]+=1
            else:
                h[arr[i]]=1
        l=[]
        for k,v in h.items():
            if h[k]==1:
                l.append(k)
        return sorted(l)



#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))

        ob = Solution()
        ans = ob.singleNum(arr)

        print(" ".join(map(str, ans)))
        tc -= 1
        print("~")

# } Driver Code Ends