class Solution:    
    def printNos(self,n):
        #Code here
        def func(i,N):
            if i>N:
                return
            print(i,end=" ")
            func(i+1,N)
        func(1,n)