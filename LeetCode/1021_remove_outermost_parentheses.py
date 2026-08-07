"""
Link : https://leetcode.com/problems/remove-outermost-parentheses/description/
"""


# Apporach 1 : 
# Time : O(n^2)  - Because of string concatination (it takes O(len(substring))
# Space : O(n)  - stack size 
# beats 64.22 %

# class Solution:
#     def removeOuterParentheses(self, s: str) -> str:
#         output = ""
#         stack = []
#         start = -1
#         end = -1
#         for i in range(len(s)):
#             if not stack:
#                 start = i
#             if s[i]=="(":
#                 stack.append(s[i])
#             if s[i]==")":
#                 stack.pop()
#                 if not stack:
#                     end = i
#                     output += s[start+1:end]


        
#         return output

#Approach 2
# Time : O(n)
# Space : O(n)
class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        stack = []
        start = -1
        end = -1
        result = []
        for i in range(len(s)):
            if not stack:
                start = i
            if s[i]=="(":
                stack.append(s[i])
            if s[i]==")":
                stack.pop()
                if not stack:
                    end = i
                    substring = s[start+1:end]
                    result.append(substring)


        
        return "".join(result)


#approach 3
# try to solve without stack.