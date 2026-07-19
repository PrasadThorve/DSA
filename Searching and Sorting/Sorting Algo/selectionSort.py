
def selectionSort(arr):
    for i in range(len(arr)-1):
        min = float('inf')
        index = 0
        # print(f"i={i}")
        for j in range(i+1, (len(arr))):
            # print(f"j={j}")
            if arr[j]<min:
                min = arr[j]
                index = j
        
        print(f"i={i} min={min}")
        if min<arr[i]:
            temp = arr[i]
            arr[i] = min
            arr[index] = temp
            
        
    return arr
            
            
        
        



##### main ###
if __name__ == "__main__":
    print("Selection Sort")
    
    arr = [7,5,9,2,8]
    
    sorted_array = selectionSort(arr)
    
    print(f"Sorted Array \n {sorted_array}")