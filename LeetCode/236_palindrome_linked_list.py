"""
Link : https://leetcode.com/problems/palindrome-linked-list/description/

Approach : 
Time : O(n)
Space : O(1)
"""

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head

        while(fast.next!=None and fast.next.next != None):
            slow = slow.next
            fast = fast.next.next

        nextHead = self.reverseLL(slow.next)

        temp1 = head
        temp2 = nextHead

        # print(f"debug: temp1={temp1.val} temp2={temp2.val}")
        ans = True
        while(temp2!=None):
            if(temp1.val!=temp2.val):
                ans = False
                
                break
            else:
                temp1 = temp1.next
                temp2 = temp2.next

        #before returning fix linkedlist
        self.reverseLL(nextHead)

        return ans
        

    def reverseLL(self,head):
        prev = None
        curr = head
        while(curr!=None):
            nextNode = curr.next
            curr.next = prev
            prev = curr
            curr = nextNode
        return prev
                
        