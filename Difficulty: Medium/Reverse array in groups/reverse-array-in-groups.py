class Solution:
    def reverseingroups(self, arr, k):
        subSection = len(arr) // k
        for index in range(subSection):
            arr[index*k:(index+1)*k] = arr[index*k:(index+1)*k][::-1]
        arr[subSection*k:] = arr[subSection*k:][::-1]