class Solution:
    def isSorted(self, arr) -> bool:
        flag = True
        for i in range(len(arr)-1):
            if arr[i]>arr[i+1]:
                flag = False
                break
        return flag