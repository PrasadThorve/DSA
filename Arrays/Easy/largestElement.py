


def findLargest(arr):
    #using for loop
    # largest = arr[0]
    # for i in range(len(arr)):
    #     if(arr[i]>largest):
    #         largest = arr[i]
    
    #using sort function
    arr.sort()
    largest = arr[-1]
            
    return largest









## main #####3

if __name__ == "__main__":
    arr = [2,5,1,3,0]
    largest = findLargest(arr)
    
    print(f"Largest = {largest}")
    
    
    
    
#Time Complexity 
#using Sort 
# Time - nlogn   &  space = O(1)

#using for loop 
# Time = n      & space = O(1)