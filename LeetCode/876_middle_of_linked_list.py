"""
Link : https://leetcode.com/problems/middle-of-the-linked-list/
"""

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

#Approach 1 : Two Pass
# Time : O(n)
# Space : O(1)

class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:

        curr = head
        count = 0
        while(curr!=None):
            curr=curr.next
            count+=1

        mid = count//2

        count = 0
        curr = head
        while(count<mid):
            curr = curr.next
            count+=1


        return curr
        

#Approach 2 : Try to solve using two Pointers (Slow and Fast)
# Time : O(n)
# Space : O(1)



        

