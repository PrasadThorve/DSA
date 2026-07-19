#Q Finding duplicate elements in array 

# arr = [1, 2, 1, 3, 2]

# cnt = 0
# n = 1
# for i in range(len(arr)):
#     if(arr[i]==n):
#         cnt+=1
        
# print(f"Cnt = {cnt}")

#using hash 

def hashf(n, arr):
    hash = [0]*12
    for i in range(len(arr)):
        hash[arr[i]] += 1
        
    count = hash[n]
    
    return count
        




######## main function ##############
if __name__ == "__main__":
    arr = [1, 2, 1, 3, 2, 1, 2, 1, 1, 1]
    n = 2
    print(hashf(n, arr))




# s = "abcde"

# for i in range(len(s)):
#     print(i, s[i])
    

# print(ord('a'))

# print(ord('z'))

# print(ord('A'))

# print(ord('Z'))
    