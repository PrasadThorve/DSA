"""
link : https://leetcode.com/problems/merge-two-sorted-lists/description/
"""

# Time : O(Total length of two list (m+n))
# Space : O(1)

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
        
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        temp1 = list1
        temp2 = list2
        head = ListNode(0)
        curr = head

        while(temp1!=None and temp2!=None):
            if(temp1.val<temp2.val):
                curr.next = temp1
                curr = temp1
                temp1 = temp1.next

            else:
                curr.next = temp2
                curr = temp2
                temp2 = temp2.next
            
        while(temp1!=None):
            curr.next  = temp1
            break

        while(temp2!=None):
            curr.next = temp2
            break



        return head.next
        