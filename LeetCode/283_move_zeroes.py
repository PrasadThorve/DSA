"""
link: https://leetcode.com/problems/move-zeroes/
"""

#Solutions 

class Solution:

        # My approach 
        # Time : O(n^2)
        # Space : O(1)
    # def moveZeroes(self, nums: List[int]) -> None:
    #     """
    #     Do not return anything, modify nums in-place instead.
    #     """
    #     right=len(nums)-1
    #     left=0
        
    #     while(left<right):
    #         j = left
    #         isFound = False
    #         while(j<right):
    #             if(nums[j]==0):
    #                 isFound = True
    #                 break
    #             else:
    #                 j+=1

    #         if(isFound==False):
    #             return

    #         while(isFound and j<right):
    #             nums[j], nums[j+1] = nums[j+1], nums[j] #swap
    #             j+=1

    #         if(left<right and nums[left]!=0):
    #             left+=1
    #         right-=1


    #Approach 2 : Optimal (using Slow and Fast pointers )
    #Time : O(n)
    #Space : O(1)
    def moveZeroes(self, nums: List[int]) -> None:
        slow = 0
        for fast in range(len(nums)):
            if(nums[fast]!=0 and nums[slow]==0):
                nums[fast], nums[slow] = nums[slow], nums[fast]

            if(nums[slow]!=0):
                slow+=1








                
        