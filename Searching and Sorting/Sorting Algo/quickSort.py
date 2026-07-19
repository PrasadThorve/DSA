
#not exactly correct 
# def quickSort(arr, low, high):
    
#     if(low>=high):
#         return 
    
#     element = arr[low]
#     print(f"arr now -> {arr}")
#     print(f"element = {element}")
    
#     if((high-low)==1):
#         if(arr[high]< arr[low]):
#             arr[high], arr[low] = arr[low], arr[high]
        
        
    
#     i = low
#     j = high
#     low += 1
    
            
        
#     while(low<high):
        
#         if(arr[low]<element):
#             low += 1
            
#         elif(arr[high]>element):
#             high -= 1
            
#         if(arr[low]>element and arr[high]<element):
#             arr[low], arr[high] = arr[high], arr[low]
#             low += 1 
#             # high -= 1
             
#     arr[low-1], arr[i] = arr[i], arr[low-1]
        
#     # print(f"low = {low} and high = {high}")
#     # print(f"element = {element}")
#     print(f"low={i}, high={j} and array={arr}")
    
#     mid= low-1
#     low = i
#     high = j 
    
    
#     print(f"low={low}, mid={mid}, high={high}")
#     #left
#     print(f"\n\n\n\nleft===> low={low}, high={mid-1}")
#     quickSort(arr,low,mid-1)
#     #right
#     print(f"\n\n\n\nright===> low={mid+1}, high={high}")
#     quickSort(arr, mid+1, high)
    
    
    
#     return arr

def partition(arr, low, high):
    
    i = low 
    j = high
    
    while(i<j):
        while(arr[i]<=arr[low] and i<=high-1):
            i+=1
        
        while(arr[j]>arr[low] and j>=low+1 ):
            j-=1
            
        if(i<j):
            arr[i], arr[j] = arr[j], arr[i]
        
    arr[low], arr[j] = arr[j], arr[low]
    
    return j

def quickSort(arr, low, high):
    
    if(low>high):
        return 
        
    p_index = partition(arr, low, high)
    print(f"Low={low}, high={high}, Partion-Index={p_index}")
    print(f"Array after Partion = {arr}\n")
        
    quickSort(arr, low, p_index-1)
    quickSort(arr, p_index+1, high)
        

    return





##### main ########

if __name__ == "__main__":
    arr = [4, 6, 2, 5, 7, 9, 1, 3]
    low = 0 
    high = (len(arr)-1) 
    print(f"low = {low} and high = {high}")

    result = quickSort(arr, low, high)

    print(f"\n\n\n\nFinal Result :\n")
    print(arr)
    
    
    
#time complexity : 
    

#space complexity : 