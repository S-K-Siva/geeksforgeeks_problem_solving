if x == 1:
            head = head.next
            head.prev = None
            return head
            
        pos = 1
        node = head
        while node:
            if pos == x:
                if node.next is None:
                    prev_node.next = None
                    return head
                else:
                    next_node = node.next
                    prev_node.next = next_node
                    next_node.prev = prev_node
                    return head
            pos+=1
            prev_node = node
            node = node.next
            
        return head