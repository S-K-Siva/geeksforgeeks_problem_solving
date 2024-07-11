class MyQueue:
    
    #Function to push an element x in a queue.
    
    def __init__(self):
        self.queue = []
    def push(self, x):
        self.queue.append(x)
         
        
     
    #Function to pop an element from queue and return that element.
    def pop(self): 
        if not len(self.queue):
            return -1
        val = self.queue[0]
        self.queue.pop(0)
        return val