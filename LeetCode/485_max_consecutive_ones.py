"""
Link : https://leetcode.com/problems/max-consecutive-ones/
"""

"""
Time Complexity : O(n)
Space Complexity : O(1)
"""


class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxi = 0
        count = 0
        for i in range(len(nums)):
            if(nums[i]==1):
                count+=1
            else:
                count=0
            
            if(count>maxi):
                maxi = count

        
        return maxi

        