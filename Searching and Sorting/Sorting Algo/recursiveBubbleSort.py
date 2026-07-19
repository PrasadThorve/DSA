

#bruteForce
def recursiveBubbleSort(arr,n):
    
    #condition 
    if n<=1:
        return arr

    for i in range(n-1):
        if(arr[i]>arr[i+1]):
            arr[i], arr[i+1] = arr[i+1], arr[i]
        
    print(f"Sorted Element: {arr[n-1]}")
    print(f"Array after sorting = {arr}")
    
    return recursiveBubbleSort(arr, n-1)
    
#optimal       
def recursiveBubbleSortOptimal(arr,n):

    #condition 
    if n<=1:
        return arr
    swapped = False
    for i in range(n-1):
        if(arr[i]>arr[i+1]):
            arr[i], arr[i+1] = arr[i+1], arr[i]
            swapped = True
            # print(f"hi i am here..")
    
    if swapped==False:
        print(f"Array is Sorted now no need of further recursion call, arr={arr}")
        return arr
        
    print(f"Sorted Element: {arr[n-1]}")
    print(f"Array after sorting = {arr}")
    
    return recursiveBubbleSortOptimal(arr, n-1)




if __name__ == "__main__":
    # arr = [13, 46, 24, 52, 20, 9]
    arr = [56, 54, 1, 2, 3, 4, 5]
    
    result = recursiveBubbleSortOptimal(arr, len(arr))
    
    print(f"\n\nSorted Result = {result}")