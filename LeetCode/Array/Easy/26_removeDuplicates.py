
"""
Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
"""

class Solution:

    #my approach - Time : O(n) & Space: O(n)
    # def removeDuplicates(self, nums: List[int]) -> int:
    #     duplicate = []
    #     n = len(nums)
    #     if n==0:
    #         return 0
    #     duplicate.append(nums[0])
    #     for i in range(1, n):
    #         element = duplicate[-1]
    #         if(nums[i]!=element):
    #             duplicate.append(nums[i])
        
    #     count = len(duplicate)
    #     for i in range(count):
    #         nums[i]=duplicate[i]

    #     return count


    # Approach 2 : using Set 
    # Time : O(n) 
    # Space: O(n) (because of Set)
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0

        seen = set()

        n = len(nums)
        index = 0
        for i in range(n):
            if not nums[i] in seen:
                seen.add(nums[i])
                nums[index]=nums[i]
                index+=1
        
        return index


    # Approach 3 : Two Pointer Approach 
    # Time : O(n)
    # Space : O(1) 
    # Solution -> 
