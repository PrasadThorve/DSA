

# array = 
def insertionSort(arr):
    n = len(arr)
    
    for i in range(1, n):
        print(f"External Loop count : {i}, element = {arr[i]}")
        element = arr[i]
        
        for j in range(i+1):
            print(f"Internal loop count : {j}")
            if(element<arr[j]):
                print(f"Condition matched : element={element}, arr[j]={arr[j]}, so element<arr[j]")
                temp = arr[j]
                print(f"temp = {temp}")
                arr[j] = element
                x = i
                print(f"x={x}")
                count = 0
                while(x>j):
                    count+=1
                    arr[x] = arr[(x-1)]
                    x-=1
                    
                arr[j+1] = temp
                print(f"Shifting done by count: {count}")
                break
            
            
            
        print(f"Array status : {arr}")
        
        
    return arr
        
    
##### main ###
if __name__ == "__main__":
    print("Selection Sort")
    arr = [7,5,9,2,8]
    sorted_array = insertionSort(arr)
    print(f"\n\n\n\n######### Answer ##############")
    print(f"\n Final Sorted Array \n {sorted_array}")