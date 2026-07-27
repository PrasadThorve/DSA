"""
Link : https://leetcode.com/problems/search-insert-position/
"""


class Solution:

    def BinarySearch(self,nums,target,left,right):

        if(left>right):
            # print("I am here")
            # print(f"left = {left}, right = {right}")
            # if(left<len(nums) and target<nums[left]):
            #     return left
            # if(right>=0 and target>nums[right]):
            #     return right+1
            # return right
            return left

        mid = int((left+right)/2)
        if(nums[mid]==target):
            return mid
        elif(target>nums[mid]):
            return self.BinarySearch(nums,target,mid+1, right)
        elif(target<nums[mid]):
            return self.BinarySearch(nums,target,left,mid-1)

    def searchInsert(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        return self.BinarySearch(nums,target,left,right)


    #approach 2 : Try to solve with Iterative method 

        