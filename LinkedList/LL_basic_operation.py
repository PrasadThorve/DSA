
class Node():
    def __init__(self,data,next=None):
        self.data = data
        self.next = next
        
        
if __name__ == "__main__":
    print(f"Implementing LL")
    n1 = Node(10)
    n2 = Node(20)
    n1.next = n2
    n3 = Node(30)
    n2.next = n3
    n4 = Node(40)
    n3.next = n4
    n5 = Node(50)
    n4.next = n5
    
    head = n1
    curr = head
    
    
    while(curr.next!=None):
        print(f"val -> {curr.data}")
        curr = curr.next