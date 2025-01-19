#include <bits/stdc++.h> 

int countDistinctWays(int nStairs) {
    //  Write your code here.
    //base condition
    if(nStairs==1){
        return 1;
    }
    if(nStairs==2){
        return 2;
    }

    int ans = countDistinctWays(nStairs-1) +  countDistinctWays(nStairs-2);

    return ans;
        
}