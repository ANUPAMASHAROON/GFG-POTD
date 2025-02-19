#User function Template for python3
'''
class Node:
    def _init_(self,x):
        self.data = x
        self.next = None
'''
class Solution:
    def mergeKLists(self, arr):
        # code here
        # return head of merged list
        pq = []
        
        for i in arr:
            heapq.heappush(pq,(i.data,i))
        
        res = head = Node(-1) 
        
        while pq:
            ele,node = heapq.heappop(pq)
            
            res.next = node
            res = res.next
            
            if node.next:
                heapq.heappush(pq,(node.next.data,node.next))
                node.next = None
        return head.next


#{ 
 # Driver Code Starts
import heapq


class Node:

    def __init__(self, x):
        self.data = x
        self.next = None

    # To compare nodes in the heap
    def __lt__(self, other):
        return self.data < other.data


def printList(node):
    while node:
        print(node.data, end=" ")
        node = node.next
    print()


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        lists = []
        for _ in range(n):
            values = list(map(int, input().split()))
            head = None
            temp = None
            for value in values:
                newNode = Node(value)
                if head is None:
                    head = newNode
                    temp = head
                else:
                    temp.next = newNode
                    temp = temp.next
            lists.append(head)

        sol = Solution()
        head = sol.mergeKLists(lists)
        printList(head)
        print("~")


if __name__ == "__main__":
    main()

# } Driver Code Ends