def removeDuplicates(head):
    current = head
    while current and current.next:
        if current.data == current.next.data:
            current.next = current.next.next       # skip duplicate
        else:
            current = current.next
    return head