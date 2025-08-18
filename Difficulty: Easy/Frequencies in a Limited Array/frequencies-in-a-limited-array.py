from collections import Counter
class Solution:
    def frequencyCount(self, arr):
        #  code here
        ar=[0]*len(arr)
        m=Counter(arr)
        for k,v in m.items():
            ar[k-1]=v
        return ar