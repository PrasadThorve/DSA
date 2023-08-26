class Solution {
public:
    int countPrimes(int n) {
       vector<bool> prasad(n+1,1);
       prasad[0]=prasad[1]=0;
       int cnt=0;
       for(int i=2;i<n;i++){
           if(prasad[i])
           {
               cnt++;
               for(int j=i*2; j<n; j+=i)
               {
                   prasad[j]=0;
               }
           }

       } 
       return cnt;
    }
};