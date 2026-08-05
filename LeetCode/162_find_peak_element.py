"""
Link : https://leetcode.com/problems/find-peak-element/description/
"""

#Solution : 
#time Complexity : O(log n)
#Space complexity : O(1)
# this Solution beats 100% users
class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        left = 0
        right = len(nums)-1
        n = len(nums)
        while(left<=right):
            mid = int((left+right)/2)
            if(mid<(n-1) and nums[mid+1]>nums[mid]):
                left = mid+1
            elif(mid>0 and nums[mid-1]>nums[mid]):
                right = mid-1
            else:
                return mid
        