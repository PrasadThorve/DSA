def mergeSort(arr, n):
    # Write your code here.
    def merge(left,right):
        result = []
        i = 0
        j = 0

        while(i<len(left) or j<len(right)):
            while(i<len(left) and j<len(right)):
                if(left[i]<right[j]):
                    result.append(left[i])
                    i+=1
                else:
                    result.append(right[j])
                    j+=1

            while(i<len(left)):
                result.append(left[i])
                i+=1

            while(j<len(right)):
                result.append(right[j])
                j+=1

        return result

    if(len(arr)<=1):
        return arr

    mid = n//2
    left = arr[:mid]
    right = arr[mid:]
    left = mergeSort(left,len(left))
    # print(left)
    right = mergeSort(right,len(right))
    # print(right)

    result = merge(left,right)
    return result


if __name__ == "__main__":
    arr = [10, 1, 0, 8, 7, 6, 5, 3]
    
    n = len(arr)
    result = mergeSort(arr, n)
    
    print(result)
                
