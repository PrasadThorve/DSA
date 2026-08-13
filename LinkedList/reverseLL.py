
class Node():
    def __init__(self,data,next=None):
        self.data = data
        self.next = next
        
        
class LinkedList():
    
    def createLL(self):
        arr = [10,20,30,40,50]
        head = Node(10)
        curr = head
        for i in range(1,len(arr)):
            temp = Node(arr[i])
            curr.next = temp
            curr = temp
            
        return head
            
    def reverseLL(self,head):
        """
        head = 10->20->30->40->50->None
        """
        curr = head
        prev = None
        
        
        
        while(curr!=None):
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next

        return prev
            
        
    def traverseLL(self,head):
        curr = head
        while(curr!=None):
            print(f"{curr.data}->")
            curr = curr.next


if __name__ == "__main__":
    
    ll = LinkedList()
    head = ll.createLL()
    print(f"LinkedList befor reverse:")
    ll.traverseLL(head)
    print(f"\nLinked list after reverse")
    new_head = ll.reverseLL(head)
    ll.traverseLL(new_head)
    
    
                
        