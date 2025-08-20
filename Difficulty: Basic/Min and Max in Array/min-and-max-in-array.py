class Solution:
    def get_min_max(self, arr):
        n=len(arr)
        max=arr[0]
        min=arr[0]
        for i in range(0,n):
            if arr[i]>max:
                max=arr[i]
            elif arr[i]<min:
                min=arr[i]
        return min,max