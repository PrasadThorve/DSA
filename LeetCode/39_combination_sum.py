
"""
Link : https://leetcode.com/problems/combination-sum/
"""

"""
Complexity Analysis: 
Time : Exponential
Space : 
"""


from typing import List

class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:

        result = []
        combination = []
        
        def backtrack(index,ans,combination):
            if(ans==0):
                result.append(combination)
                return

            #pick 
            if ans>=candidates[index]:
                backtrack(index,ans-candidates[index],combination + [candidates[index]])

            #not pick
            if index<(len(candidates)-1):
                backtrack(index+1,ans,combination)
                

        backtrack(0,target,combination)

        return result




            