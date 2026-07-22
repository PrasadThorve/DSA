class Solution:
    
    #approach: Time : O(n) and Space : O(n)
    # def check(self, nums: List[int]) -> bool:
    #     #condition1
    #     mini = float('inf')
    #     index = 0
    #     isSorted = True
    #     for i in range(len(nums)-1):
    #         if(nums[i] > nums[i+1]):
    #             isSorted=False

            
        
    #     if(isSorted):
    #         print("top")
    #         return True

    #     for i in range(len(nums)):
    #         if(nums[i]<mini):
    #             mini = nums[i]
    #             index = i
    #         elif(nums[i]<=mini and nums[i-1]>mini):
    #             index = i

    #     duplicate = []
    #     print(f"index = {index}")
    #     for i in range(index, len(nums)):
    #         duplicate.append(nums[i])
    #     for i in range(index):
    #         duplicate.append(nums[i])

    #     isSorted = True
    #     for i in range(len(duplicate)-1):
    #         if(duplicate[i]>duplicate[i+1]):
    #             isSorted=False
    #             break
        
    #     print(duplicate)
    #     print("bottom")
    #     return isSorted

    #Approach 2 
    #Time Complexit = O(n) and Space Complexity = O(n)
    # def check(self, nums: List[int]) -> bool:
    #     #condition1
    #     mini = float('inf')
    #     index = 0
    #     isSorted = True
    #     for i in range(len(nums)-1):
    #         if(nums[i] > nums[i+1]):
    #             isSorted=False

    #     if(isSorted):
    #         # print("top")
    #         return True

    #     for i in range(len(nums)):
    #         if(nums[i]<mini):
    #             mini = nums[i]
    #             index = i
    #         elif(nums[i]<=mini and nums[i-1]>mini):
    #             index = i

        
    #     # print(f"Index = {index}")
    #     for i in range(index, len(nums)-1):
    #         if(nums[i]>nums[i+1]):
    #             # print("1")
    #             return False
    #     if(nums[len(nums)-1]>nums[0]):
    #         # print("2")
    #         return False
    #     for i in range(index-1):
    #         if(nums[i]>nums[i+1]):
    #             # print("3")
    #             return False

    #     # print("4")
    #     return True


    #approach 3 (Optimal)
    def check(self, nums: List[int]) -> bool:
        n = len(nums)
        count = 0
        for i in range(n):
            if(nums[i]>nums[(i+1)%n]):
                count+=1
        
        # print(f"count = {count}")

        return count<=1

        