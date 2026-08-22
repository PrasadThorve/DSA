"""
Link : https://leetcode.com/problems/sort-list/
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

#Approach 1 : Using Array 
# Time : O(nlogn)
# Space : O(n)
# class Solution:
#     def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:

#         curr = head
#         arr = []
#         while(curr!=None):
#             arr.append(curr.val)
#             curr = curr.next

#         #sort array 
#         arr.sort()
#         # print(arr)

#         curr = head
#         count = 0
#         while(curr!=None):
#             curr.val = arr[count]
#             count+=1
#             curr = curr.next

#         return head


#Approach 2 : Without using extra Space 
# Time : O(n log n)
# Space : O(log n)   #recursive stack

class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:  
        
        if(head==None or head.next==None):
            return head

        mid = self.findMid(head)

        left = self.sortList(head)
        right = self.sortList(mid)

        return self.merge(left,right)

    
    
    def findMid(self,head):
        slow = head
        fast = head

        while(fast!=None and fast.next!=None and fast.next.next!=None):
            slow = slow.next
            fast = fast.next.next

        mid = slow.next
        slow.next = None

        return mid




    def merge(self,list1,list2):
        curr = ListNode(0)
        head = curr

        while(list1!=None and list2!=None):
            if(list1.val<list2.val):
                curr.next=list1
                list1 = list1.next
            else:
                curr.next = list2
                list2 = list2.next

            curr = curr.next

        if(list1!=None):
            curr.next = list1
        
        if(list2!=None):
            curr.next = list2

        return head.next




#Approach 3 : Try to solve without extra space 

