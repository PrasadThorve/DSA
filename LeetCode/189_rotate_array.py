"""
link : https://leetcode.com/problems/rotate-array/description/
"""

#Solution : 
class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        #approach 1 : 
        #Time: O(n*k)
        # space : O(1)
        #problem : TLE
        # n = len(nums)
        # for i in range(k):
        #     # print(f"i={i}")
        #     temp = nums[n-1]
        #     for j in range(n-1, 0, -1):
        #         # print(j)
        #         nums[j] = nums[j-1]
        #     nums[0] = temp

        ##########################################################################3

        #approach 2 
        #Time : O(n)
        #space : O(n)

        # n = len(nums)
        # duplicate = []
        
        # if(k>=n):
        #     k=k%n
        #     # print(f"k={k}")
        # if(n==1):
        #     return
        # index = n - k

        # for i in range(index, n):
        #     duplicate.append(nums[i])
        # for i in range(index):
        #     duplicate.append(nums[i])

        # # print(f"duplicate={duplicate}")
        
        # nums[:] = duplicate

        # # print(f"nums = {nums}")


        #############################################################################
        #approach 3 : optimal solution 
        #Time : O(n)
        #Space : O(1)

        n = len(nums)
        k = k%n
        nums.reverse()
        nums[:k] = reversed(nums[:k])
        nums[k:] = reversed(nums[k:])




