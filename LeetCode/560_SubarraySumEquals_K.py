"""
Link: https://leetcode.com/problems/subarray-sum-equals-k/

#Complexity 
Time : O(n)
Space : O(n)
"""




class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        prefixSum = {0:1}
        total = 0
        count = 0
        for item in nums:
            total += item
            if total-k in prefixSum:
                count+=prefixSum[total-k]

            prefixSum[total] = prefixSum.get(total, 0) + 1
 
        return count

                
        