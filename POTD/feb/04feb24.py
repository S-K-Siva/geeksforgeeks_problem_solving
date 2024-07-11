
class Solution:
    def subLinkedList(self, t1, t2): 
        num1 = 0
        num2 = 0
        l1 = t1
        l2 = t2
        while l1 and l1.data == 0:
            l1 = l1.next
        while l2 and l2.data == 0:
            l2 = l2.next
            
        while l1:
            val = l1.data
            num1 = (num1*10)+val
            l1 = l1.next
            
        while l2:
            val = l2.data
            num2 = (num2*10)+val
            l2 = l2.next
        
        num1 = int(num1)
        num2 = int(num2)

        total = str(abs(num1-num2))

        index = 0
        root = Node(-1)
        temp = root
        try:
            while (index < len(total)):
                newNode = Node(int(total[index]))
                temp.next = newNode
                newNode.next = temp.next.next
                temp = newNode
                index += 1
        except:
            print("Error")
        return root.next
        
        
        
