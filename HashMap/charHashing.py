
def charHashing(s, c):
    hasharr = [0]*256
    for char in s:
        hasharr[ord(char)] += 1
        
    
    cnt = hasharr[ord(c)]
    
    
    return cnt











#### main ####
if __name__ == "__main__":
    # print("hello")
    s = "abcdedccbbaddddddddddddddd"
    s = 'PpPp'
    s = s.lower()
    
    c = 'p'
    print(charHashing(s, c))