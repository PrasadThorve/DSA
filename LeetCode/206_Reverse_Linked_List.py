"""
Link : https://leetcode.com/problems/reverse-linked-list/description/
"""

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Approach 1 : Iterative Method
# Time Complexity : O(n)
# Space Complexity : O(1)
# class Solution:
#     def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
#         prev = None
#         curr = head
#         while(curr!=None):
#             nextNode = curr.next
#             curr.next = prev
#             prev = curr
#             curr = nextNode

#         return prev


# Approach 2 : Recursive Method
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        curr = head
        output = self.revLL(curr,prev)
        return output

    
    def revLL(self,curr,prev):
        #base condition
        if(curr==None):
            return prev
        
        #condition 2
        nextNode = curr.next
        curr.next = prev
        prev = curr
        curr = nextNode

        return self.revLL(curr,prev)


    




        