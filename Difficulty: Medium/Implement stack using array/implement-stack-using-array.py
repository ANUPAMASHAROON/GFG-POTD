class myStack:
    def __init__(self, n):
        self.items = []
        self.size = 0
        self.n = n
    def isEmpty(self):
        return len(self.items) == 0
    def isFull(self):
        return self.size == self.n
    def push(self, x):
        if self.size < self.n:
            self.items.append(x)
            self.size += 1
    def pop(self):
        if self.size == 0:
            return "Cannot pop, stack is empty"
        x = self.items.pop()
        self.size -= 1
        return x
    def peek(self):
        if self.size == 0:
            return -1
        return self.items[-1]