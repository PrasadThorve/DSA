"""
Link : https://leetcode.com/problems/count-good-numbers/
"""



class Solution:

    MOD = 10**9 + 7
    def countGoodNumbers(self, n: int) -> int:

        result1 = self.power(5,n//2)
        result2 = self.power(4,n//2)
        print(4//2)
        # print(f"n={n}, result1={result1} and result2={result2}")

        result = result1*result2
        
        if n%2==1:
            result = 5*result

        result = result%self.MOD

        return result





    
    def power(self,val,x):
        if x==0:
            return 1
        if x==1:
            return val

        val %= self.MOD

        #x is even
        if(x%2==0):
            return self.power(val*val, x//2)
        else:
            return val*self.power(val,x-1)


        

        