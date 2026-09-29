"""
Link : https://leetcode.com/problems/subsets-ii/description/
"""

#Solution Beats 100% Users 

#Time Complexity = nlogn + n2^n

#Space Complexity = O(n2^n) including output and O(n) auxilary

class Solution:
    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:

        def backtrack(index,result,seen):
            #base condition
            if(index==len(nums)):
                x = tuple(result)
                seen.add(x)
                return 

            #add
            result.append(nums[index])
            backtrack(index+1,result,seen)
            result.pop()


            #not add 
            backtrack(index+1, result, seen)    


        index = 0
        result = []
        ans = []

        seen = set()
        
        nums.sort()

        backtrack(index, result, seen)
        
        for x in seen:
            ans.append(list(x))

        return ans
           