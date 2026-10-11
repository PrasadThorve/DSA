"""
Link : https://leetcode.com/problems/longest-consecutive-sequence/description/
"""


"""
Complexity : 
Time : O(n)
Space : O(n)
"""


#solution 

class Solution:
        def longestConsecutive(self, nums: list[int]) -> int:

            if not nums:
                return 0

            ht = set(nums)

            max_count = 0
            for item in ht:
                count = 1
                if item in ht:
                    if item-1 in ht:
                        continue

                    while(item+count in ht):
                        count+=1
                                

                max_count = max(count, max_count)


            return max_count



        




        