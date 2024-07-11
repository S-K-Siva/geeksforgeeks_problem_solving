

class Node: 
    # Constructor to initialize the node object 
    def __init__(self, data): 
        self.data = data 
        self.next = None

class Solution:
    def sortedInsert(self, head, data):
        if not head:
            newNode = Node(data)
            newNode.next = newNode
            return newNode
        current = head
        
        while True:
            
            if current.data <= data and current.next.data > data:
                newNode = Node(data)
                newNode.next = current.next
                current.next = newNode
                break
            if current.next != head:
                current = current.next
            else:
                newNode = Node(data)
                current.next = newNode
                newNode.next = head
                if data <= head.data:
                    head = newNode
                break
        return head
