class Solution:
    def largest(self, arr):
        n=len(arr)
        arr.sort()
        return arr[n-1]