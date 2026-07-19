
def find_freq(arr):
    
    freq_map = {}
    
    for num in arr:
        freq_map[num] = freq_map.get(num, 0) + 1
        
    maxValue = 0
    minValue = 0
    maxFreq = 0
    minFreq = len(arr)
    
    for element, freq in freq_map.items():
        # print(element, freq) 
        if freq>maxFreq:
            maxFreq = freq
            maxValue = element
            
        if freq<minFreq:
            minFreq = freq
            minValue = element
            
    return maxValue, maxFreq, minValue, minFreq

            
        




#######main ########
if __name__ == "__main__":
    array = [10, 5, 10, 15, 10, 5]
    
    maxValue, maxFreq, minValue, minFreq = find_freq(array)
    
    print(f"maxValue= {maxValue}, maxFreq = {maxFreq}")
    print(f"minValue = {minValue}, minFreq= {minFreq}")