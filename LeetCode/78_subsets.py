"""
Link : https://leetcode.com/problems/subsets/
"""
"""
Time Complexity : O(n * 2^n)
"""


class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:

        def backtrack(index,result,nums,ans):
            #base condition
            if(index==len(nums)):
                ans.append(result.copy())
                # print(f"result={result}")
                return 
            
            #add element
            result.append(nums[index])
            backtrack(index+1,result,nums,ans)
            result.pop()

            #not add 
            backtrack(index+1, result, nums, ans)

        ans = []
        result = []
        index = 0

        backtrack(0, result, nums, ans)

        return ans




        