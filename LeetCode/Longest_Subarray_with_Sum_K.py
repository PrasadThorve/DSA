"""
Link : 
Naukri : https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399?leftPanelTabValue=SUBMISSION
LeetCode Premium : https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/description/ 
"""

 
#my solution 
def longestSubarrayWithSumK(a: [int], k: int) -> int: # type: ignore
    # Write your code here
    prefixSum = {0:-1}
    total = 0
    maxi = 0
    for i in range(len(a)):
        total += a[i]
        if total-k in prefixSum:
            maxi = max(maxi,i-prefixSum[total-k])
        if total not in prefixSum:
            prefixSum[total] = i

    return maxi