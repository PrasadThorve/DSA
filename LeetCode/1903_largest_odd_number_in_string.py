"""
Link : https://leetcode.com/problems/largest-odd-number-in-string/
"""

#Solution 
#approach 1 
#Time Complexity : O(n)
#Space Complexity : O(n)

class Solution:
    def largestOddNumber(self, num: str) -> str:
        ans = ""
        index = -1
        for i in range(len(num)-1,-1,-1):
            char = num[i]
            number = int(char)
            if((number%2) != 0):
                index = i
                break
        # print(f"Index = {index}")
        if(index != -1):
            ans = num[:index+1]
        
        return ans
        

