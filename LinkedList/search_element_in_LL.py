
class ListNode():
    def __init__(self,val,next=None):
        self.val = val
        self.next = next
        
class LinkedList():
    def CreatLL(self,arr):
        head = ListNode(arr[0])
        curr = head
        for i in range(1, len(arr)):
            temp = ListNode(arr[i])
            curr.next = temp
            curr = temp
             
        return head 
    
    def traverseLL(self,head):
        curr = head
        while(curr!=None):
            print(f"{curr.val}->")
            curr = curr.next
        

        




###### main #####
if __name__ == "__main__":
    arr = [10,20,30,40,50,60,70,80,90,100]
    ll = LinkedList()
    head = ll.CreatLL(arr)
    ll.traverseLL(head)
    