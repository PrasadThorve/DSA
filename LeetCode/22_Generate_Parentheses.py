"""
link : https://leetcode.com/problems/generate-parentheses/description/
"""

from typing import List

#complexity analysis
# Time:  O(Cₙ × n)
# Space: O(Cₙ × n) including output
#        O(n) auxiliary space
       
# Cₙ = n-th Catalan number



class Solution:
    def generateParenthesis(self, n: int) -> List[str]:

        stack = []
        result = []

        def backtrack(openN, closeN):
            #base condition 
            if openN==n and closeN==n:
                result.append("".join(stack))
                return 

            if openN<n:
                stack.append("(")
                backtrack(openN+1, closeN)
                stack.pop()

            if closeN<openN:
                stack.append(")")
                backtrack(openN, closeN+1)
                stack.pop()

        backtrack(0,0)

        return result

            
        