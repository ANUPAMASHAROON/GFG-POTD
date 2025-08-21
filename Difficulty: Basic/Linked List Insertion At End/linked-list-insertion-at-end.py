class Solution:
    def insertAtEnd(self, head, x):
        nb = Node(x)                           
        if head is None:                      
            return nb   
        temp = head
        while temp.next:                     
            temp = temp.next
        temp.next = nb                    
        return head