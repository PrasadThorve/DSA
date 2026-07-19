

def mergeSort(arr):
    
    #condition 
    size = len(arr)
    print(f"Size = {size}")
    if size<=1:
        return arr
    
    mid = int((size+1)/2)
    print(f"Mid {mid}")
    
    arr1 = arr[:mid]
    arr2 = arr[mid:]
    
    print(f"arr1={arr1} and arr2={arr2}")
    
    left = mergeSort(arr1)
    print(f"Left Array = {left}")
    
    right = mergeSort(arr2)
    print(f"Right Array = {right}")    

    
    L = len(left)
    R = len(right)
    i=0
    j=0
    finalArr = []
    while(i<L or j<R):
        
        if(i<L and j<R):
            if(left[i]<right[j]):
                finalArr.append(left[i])
                i+=1
            else:
                finalArr.append(right[j])
                j+=1
                
        if(i>=L):
            while(j<R):
                finalArr.append(right[j])
                j+=1
                
        if(j>=R):
            while(i<L):
                finalArr.append(left[i])
                i+=1
                
        
        
    
    
    return finalArr








##### main #######

if __name__ == "__main__":
    arr = [4, 2, 7,10, 1, 5,1, 1, 2, 3,  3]
    
    final_arr = mergeSort(arr)
    
    print(f"Final Array \n{final_arr}")
    
    
    
    
    
    
    
#Time Compexity Analysis 
"""
so devide is taking log(n)
merging is taking n in worst case 
time complexity = n*log(n)
"""
