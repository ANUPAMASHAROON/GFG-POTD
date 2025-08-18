class Solution:
    def firstRepeated(self,arr):
        # code here 
        d={}
        for i in arr:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for i in range(len(arr)):
            if d[arr[i]]>1:
                return i+1
        else:
            return -1