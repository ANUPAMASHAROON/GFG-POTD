class Solution:
    def commonElements(self, arr1, arr2, arr3):
        #Code Here
        m=set(arr1)
        n=set(arr2)
        l=set(arr3)
        k=l.intersection(m.intersection(n))
        if len(k)>=1:
            return list(sorted(k))
        else:
            return [-1]