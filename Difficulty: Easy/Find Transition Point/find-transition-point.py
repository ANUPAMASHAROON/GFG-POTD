class Solution:
    def transitionPoint(self, arr): 
        zero_idx, one_idx = 0, 0
        for num in arr:
            if num==0: zero_idx+=1
            else: one_idx+=1
        if (one_idx==0): return -1
        else: return zero_idx