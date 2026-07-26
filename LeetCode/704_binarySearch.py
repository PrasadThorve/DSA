"""
Link : https://leetcode.com/problems/binary-search/
Time : O(log n)
Space : O(log n) - recursive stack.

"""







#Solution : Approach 1 
class Solution:

    def binarySearch(self,nums,target,left,right):

        if(left>right):
            return -1

        mid = int((left+right+1)/2)
        print(f"Left={left}, right={right}  mid={mid}")
        if(nums[mid]==target):
            print("I am here...")
            return mid
        elif(target<nums[mid]):
            right = mid-1
            return self.binarySearch(nums,target,left,right)
        elif(target>nums[mid]):
            left = mid+1
            return self.binarySearch(nums, target, left, right)

    def search(self, nums: List[int], target: int) -> int:

        left = 0
        right = len(nums)-1

        result = self.binarySearch(nums,target, left, right)

        print(f"\nResult = {result}")
        return result
    
    
    
    
#Approach 2: 
# Try to solve with O(1) space complexity.
        
        

        