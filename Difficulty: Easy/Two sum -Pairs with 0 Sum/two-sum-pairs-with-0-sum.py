#User function Template for python3

class Solution:
    def getPairs(self, arr):
        count = {}
        pairs = set()

        for num in arr:
            count[num] = count.get(num, 0) + 1

        for num in arr:
            if -num in count:
                if num == 0 and count[num] < 2:
                    continue  #
                pair = tuple(sorted((num, -num)))
                pairs.add(pair)

        result = sorted([list(pair) for pair in pairs])
        return result