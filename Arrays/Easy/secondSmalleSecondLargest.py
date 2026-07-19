



# def secondSmallestSecondLargest(arr):
#     largest = float('-inf')
#     secondLargest = float('-inf')
#     smallest = float('inf')
#     secondSmallest = float('inf')
    
#     n = len(arr)
    
#     if(n==0 or n==1):
#         return -1, -1

#     for i in range(len(arr)):
#         if(arr[i]>largest):
#             largest = arr[i]
           
#         if(arr[i]<smallest):
#             smallest=arr[i]
        
            
#     for i in range(len(arr)):
#         if(arr[i]>secondLargest and arr[i]<largest):
#             secondLargest=arr[i]
            
#         if(arr[i]<secondSmallest and arr[i]>smallest):
#             secondSmallest=arr[i]
            
    

#     return secondLargest, secondSmallest


def secondSmallestSecondLargestOptimal(arr):
    largest = float('-inf')
    secondLargest = float('-inf')
    smallest = float('inf')
    secondSmallest = float('inf')
    
    n = len(arr)
    
    if(n==0 or n==1):
        return -1, -1

    for i in range(len(arr)):
        if(arr[i]>largest):
            secondLargest=largest
            largest = arr[i]
        elif(arr[i]>secondLargest and arr[i]!=largest):
            secondLargest = arr[i]
        
           
        if(arr[i]<smallest):
            secondSmallest=smallest
            smallest=arr[i]
        elif(arr[i]<secondSmallest and arr[i]!=smallest):
            secondSmallest = arr[i]
        
            

            
    

    return secondLargest, secondSmallest







if __name__ == "__main__":
    arr = [10,1,2,4,6,7,5]
    
    secondLargest, secondSmallest = secondSmallestSecondLargestOptimal(arr)
    
    
    print(f"SecondSmallest = {secondSmallest}")
    print(f"SecondLargest = {secondLargest}")