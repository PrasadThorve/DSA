"""
link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
"""



from typing import List


class Solution:
    # Approach 1 : Time Compexity : Best Case : O(log n) worst case O(n)
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left = 0
        right = len(nums)-1

        while(left<=right):
            mid = int((left+right)/2)
            if(nums[mid]==target):
                print("yes found ")
                i = mid
                j = mid
                while(i>=0):
                    if(nums[i] == target):
                        i-=1
                    else:
                        break
                while(j<len(nums)):
                    if(nums[j]==target):
                        j+=1
                    else:
                        break

                return [i+1,j-1]
            elif(target>nums[mid]):
                left = mid+1

            else:
                right = mid-1
        
        return [-1,-1]




#Approach 2 : Time Complexity O(log n)
    
        