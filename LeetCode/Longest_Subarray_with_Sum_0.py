"""
Naukri : https://www.naukri.com/code360/problems/longest-subset-zero-sum_920321?leftPanelTabValue=PROBLEM
LeetCode Premium : https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/description/

Complexity :
Time : O(n)
Space : O(n)

"""

from math import *
from collections import *
from sys import *
from os import *

def LongestSubsetWithZeroSum(arr):
    # Approach 1 : Hashing 
    prefixSum = {0:-1}
    total = 0
    best = 0
    for i in range(len(arr)):
        total += arr[i]
        if total in prefixSum:
            best = max(best, i-prefixSum[total])

        if total not in prefixSum:
            prefixSum[total] = i

    return best 




