class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def size(self):
        return len(self.items)

    def peek(self):
        return self.items[-1]

    def pop(self):
        if not self.items:
            return None
        return self.items.pop()
