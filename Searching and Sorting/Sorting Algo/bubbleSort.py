

def bubbleSort(arr):
    n = len(arr)
    for i in range(n-1,-1,-1):
        for j in range(i):
            print(f"i={i}, j={j}")
            if arr[j]>arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
            
        print(f"Index={i}, Element={arr[i]}")
        
    


    return arr





# main
if __name__ == "__main__":
    arr = [13,46,24,52,20,9]
    output = bubbleSort(arr)
    print(f"\n\nFinal Output : {output}")