

def recursiveInsertionSort(arr,i, n):
    
    if i==n:
        return 
    print(f"Array after sort = {arr}")
    element = arr[i]
    print(f"Element to sort {element}")
    print(f"i = {i}")
    
    for j in range(i-1,-1,-1):
        if(element<arr[j]):
            print(f"j={j} and arr[j]={arr[j]}")
            arr[j+1] = arr[j]
            arr[j] = element 
            
    
            
    
    
    recursiveInsertionSort(arr,(i+1), n )





if __name__ == "__main__":
    arr = [13, 46, 24, 52, 20, 9]
    
    n = len(arr)
    i = 1
    
    recursiveInsertionSort(arr,i,n)
    
    print(f"\n\nArray after Recursion = {arr}")
    
    
    
    # print(f"iam here ")
    # for j in range(5,0,-1):
    #     print(j)