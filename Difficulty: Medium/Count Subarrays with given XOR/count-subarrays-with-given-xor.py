class Solution:
    def subarrayXor(self, arr, k):
        # code here
        prefix_xors = {0 : 1}
        c_xor, cnt = 0, 0
        for ele in arr:
            # compute the current xor
            c_xor ^= ele
            #Check if there is a prefix xor that matched the XOR(current xor, k) 
            if c_xor^k in prefix_xors:
                cnt += prefix_xors[c_xor ^ k]
            # update the disctionary with current xor 
            prefix_xors[c_xor] = prefix_xors.get(c_xor,0) + 1
        return cnt


#{ 
 # Driver Code Starts
if __name__ == "__main__":
    tc = int(input())

    for _ in range(tc):
        arr = list(map(int, input().split()))
        k = int(input())

        obj = Solution()
        print(obj.subarrayXor(arr, k))
        print("~")

# } Driver Code Ends