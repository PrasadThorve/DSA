#count Digit 

n = 12345678

# print(19%10)

def countDigit(n):
    cnt = 0
    
    while(n>0):
        number = n%10
        n = n/10
        n = int(n)
        print(f"value of n : {n}")
        cnt = cnt+1
        
    print(f"Count of Numbers : {cnt}")
    
countDigit(n)


print(f"what is this ---> ")

n = 12345
n = n//10

print(f"new n value = {n}")

import math
cnt = int(math.log10(n)+1)
print(f"count : {cnt}")