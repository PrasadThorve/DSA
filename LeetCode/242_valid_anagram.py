#Approach 1 
# Time : O(n log n)
# Space : O(n)
# class Solution:
#     def isAnagram(self, s: str, t: str) -> bool:
#         sorted_s = "".join(sorted(s))
#         sorted_t = "".join(sorted(t))

#         if(sorted_s==sorted_t):
#             return True
#         else:
#             return False



#Approach 2 
# Time : O(n)
# Space : O(26) #assuming all characters are in lowercase.
class Solution:
    def isAnagram(self,s:str,t:str) -> bool:

        if len(s) != len(t):
            return False 

        counts = {}
        for char in s:
            counts[char] = counts.get(char,0) + 1

        # print(counts)

        for char in t:
            if char not in counts or counts[char]==0:
                return False
            counts[char] -=1

        return True
    

