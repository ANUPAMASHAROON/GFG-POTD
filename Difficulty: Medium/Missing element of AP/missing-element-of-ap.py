#User function Template for python3

class Solution:
       def findMissing(self, arr):
        # code here
        # compute the difference of the AP
        d = min(arr[1] - arr[0], arr[-1] -arr[-2])
        # Compare the difference to find the missing term
        return next((arr[i] + d for i in range(len(arr)-1) if d != arr[i+1] - arr[i]), arr[-1]+d)


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import sys
import math


def main():
    input = sys.stdin.read
    data = input().strip().split('\n')

    t = int(data[0])
    solution = Solution()

    for i in range(1, t + 1):
        arr = list(map(int, data[i].split()))
        print(solution.findMissing(arr))
        print("~")


if __name__ == "__main__":
    main()

# } Driver Code Ends